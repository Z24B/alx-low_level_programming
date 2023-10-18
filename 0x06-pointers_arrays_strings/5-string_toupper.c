#include "main.h"

/**
 * string_toupper - function changes lowercase letters of string to uppercase
 * @n: string
 * Return: uppercase letters
 */

char *string_toupper(char *n)
{
	int x = 0;

	while (n[x] != '\0')
	{
		if (n[x] >= 'a' && n[x] <= 'z')
			n[x] = n[x] - 32;
		x++;
	}
	return (n);
}
