#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to address if head of list
 * function sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
		return;

	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	head = NULL;
}
