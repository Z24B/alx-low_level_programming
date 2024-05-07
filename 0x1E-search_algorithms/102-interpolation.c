#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 * or -1 if value is not present in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		double interpol_ratio = (double)(high - low) / (array[high] - array[low]);
		size_t pos = low + (interpol_ratio * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", high);
	return (-1);
}
