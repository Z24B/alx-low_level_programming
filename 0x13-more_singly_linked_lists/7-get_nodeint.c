#include "lists.h"

/**
 * get_nodeint_at_index - function returns nth node of listint_t linked list
 * @head: first node in list
 * @index: the index of the node, starting at 0
 * Return: pointer to node
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *y = head;

	while (y && x < index)
	{
		y = y->next;
		x++;
	}
	return (y ? y : NULL);
}
