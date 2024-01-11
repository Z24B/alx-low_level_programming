#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of list
 * @index: node index
 * Return:if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (!head)
		return (NULL);

	while (x < index && head)
	{
		head = head->next;
		x++;
	}
	if (x == index)
		return (head);
	return (NULL);
}
