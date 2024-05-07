#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Prints an array
 * @array: Pointer to the first element of the array
 * @start: Start index of the array
 * @end: End index of the array
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i != start)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * advanced_binary_recursive - Searches for a value in a sorted array
 * of integers using the advanced binary search algorithm recursively
 * @array: Pointer to the first element of the array
 * @start: Start index of the subarray
 * @end: End index of the subarray
 * @value: Value to search for
 *
 * Return: The index where value is located,
 * or -1 if value is not present in array or if array is NULL
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (start <= end)
	{
		mid = start + (end - start) / 2;
		print_array(array, start, end);

		if (array[mid] == value && (mid == start || array[mid - 1] != value))
			return (mid);
		else if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, end, value));
		else
			return (advanced_binary_recursive(array, start, mid, value));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using the advanced binary search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 * or -1 if value is not present in array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
