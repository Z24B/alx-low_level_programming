#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *output = malloc(b);

	if (output == NULL)
	{
		exit(98);
	}
	return (output);
}
