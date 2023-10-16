#include "main.h"

/**
 * puts_half - function that prints half of a string
 * if num odd, n = (length_of_the_string - 1) / 2
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int x;
	int n;
	int count = 0;

	for (x = 0 ; str[x] != '\0' ; x++)
		count++;
	n = (count - 1) / 2;
	for (x = n + 1 ; str[x] != '\0' ; x++)
		_putchar(str[x]);
	_putchar('\n');
}
