#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: memory destination 1
 * @dest: memory destination 2
 * @n: bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
