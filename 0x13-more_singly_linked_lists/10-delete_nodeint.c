#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index
 * of a listint_t linked list
 * @head: pointer
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = *head;
	listint_t *y = NULL;
	unsigned int z = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}

	while (z < index - 1)
	{
		if (!x || !(x->next))
			return (-1);
		x = x->next;
		z++;
	}

	y = x->next;
	x->next = y->next;
	free(y);

	return (1);
}
