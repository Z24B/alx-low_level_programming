#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string 1
 * @accept: string 2
 * Return: pointer to the byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *x =  accept;

		while (*x != '\0')
		{
			if (*s == *x)
				return (s);
			x++;
		}
		s++;
	}
	return (NULL);
}
