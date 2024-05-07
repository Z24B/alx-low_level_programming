#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: A pointer to the first node where value is located,
 * or NULL if value is not present in the list or if list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *current;

	if (list == NULL)
		return (NULL);

	prev = list;
	current = list->express;
	while (current != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				current->index, current->n);
		if (current->n >= value || current->express == NULL)
			break;
		prev = current;
		current = current->express;
	}

	if (current == NULL)
	{
		while (prev->next != NULL)
			prev = prev->next;
		current = prev;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	while (prev != NULL && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
