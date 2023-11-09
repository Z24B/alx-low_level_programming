#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to be printed
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	char *str;
	unsigned int y;

	va_start(x, n);
	for (y = 0; y < n; y++)
	{
		str = va_arg(x, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}
