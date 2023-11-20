#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning of a listint_t list
 * @head: pointer to address of head of list
 * @n: interger
 * Return:  address of the new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *y;

	y = malloc(sizeof(listint_t));
	if (y == NULL)
		return (NULL);

	y->n = n;
	y->next = *head;

	*head = y;

	return (y);
}
