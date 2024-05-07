#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * min - Returns the minimum of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The minimum of a and b
 */
size_t min(size_t a, size_t b)
{
	return (a < b ? a : b);
}

/**
 * binary_search_two - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @low: Index of the first element in the subarray
 * @high: Index of the last element in the subarray
 * @value: Value to search for
 *
 * Return: The index where value is located,
 * or -1 if value is not present in array or if array is NULL
 */
int binary_search_two(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		size_t i;

		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[high]);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 * or -1 if value is not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bd = 1;

	if (array == NULL)
		return (-1);

	while (bd < size && array[bd] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bd, array[bd]);
		bd *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", bd / 2,
			min(bd, size - 1));
	return (binary_search_two(array, bd / 2, min(bd, size - 1), value));
}
