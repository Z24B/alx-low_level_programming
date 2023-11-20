#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function returns number of elements in a linked listint_t list
 * @h: pointer to head of list
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
