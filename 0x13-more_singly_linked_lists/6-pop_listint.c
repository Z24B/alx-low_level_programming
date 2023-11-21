#include "lists.h"

/**
 * pop_listint - function deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: pointer to head of list
 * Return: head nodes data
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *x;
	int y;

	if (!head || !*head)
		return (0);

	y = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;

	return (y);
}
