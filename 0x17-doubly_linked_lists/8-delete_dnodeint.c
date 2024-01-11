#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of linked list
 * @head: pointer to head of list
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *node;
	dlistint_t **pointer;

	if (!head || !*head)
		return (-1);

	pointer = head;

	while (x < index && (*pointer)->next)
	{
		pointer = &((*pointer)->next);
		x++;
	}
	if (x < index)
		return (-1);

	if ((*pointer)->next)
		((*pointer)->next)->prev = (*pointer)->prev;
	node = *pointer;
	*pointer = (*pointer)->next;
	free(node);
	return (1);
}
