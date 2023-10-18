#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: destination string value
 * @src: source string value
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int lend = 0;
	int lens = 0;
	int x;

	for (x = 0 ; dest[x] != '\0' ; x++)
		lend++;
	for (x = 0 ; src[x] != '\0' ; x++)
		lens++;
	for (x = 0 ; x <= lens ; x++)
		dest[lend + x] = src[x];
	return (dest);
}
