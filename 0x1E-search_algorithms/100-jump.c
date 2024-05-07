#include "search_algos.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 * or -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL)
		return (-1);

	while (array[prev] < value)
	{
		size_t jump = prev + step;

		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		if (jump >= size)
		{
			jump = size - 1;
			break;
		}

		if (array[jump] >= value)
			break;

		prev += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + step);

	for (; prev <= prev + step && prev < size; prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
