#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to newly allocated space in memory
 * @str: string to copy
 * Return: pointer to new memory
 */

char *_strdup(char *str)
{
	int i, r = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		copy[r] = str[r];

	return (copy);
}
