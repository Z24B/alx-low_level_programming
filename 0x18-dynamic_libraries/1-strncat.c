#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings
 * use at most n bytes from src
 * @dest: destination string value
 * @src: source string value
 * @n: number of bytes
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int x;

	for (x = 0 ; x < n && *src != '\0' ; x++)
	{
		dest[len + x] = *src;
		src++;
	}
	dest[len + x] = '\0';
	return (dest);
}
