#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size of each array element
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;
	char *y;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(size * nmemb);

	if (x == NULL)
		return (NULL);

	y = x;

	for (index = 0; index < (size * nmemb); index++)
		y[index] = '\0';
	return (x);
}
