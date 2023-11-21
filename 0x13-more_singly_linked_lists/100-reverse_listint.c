#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL;
	listint_t *y = NULL;

	while (*head)
	{
		y = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = y;
	}
	*head = x;

	return (*head);
}
