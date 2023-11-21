#include "lists.h"

/**
 * sum_listint - function returns sum of all data(n) of listint_t linked list
 * @head: first node in list
 * Return: sum
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *y = head;

	while (y)
	{
		x += y->n;
		y = y->next;
	}
	return (x);
}
