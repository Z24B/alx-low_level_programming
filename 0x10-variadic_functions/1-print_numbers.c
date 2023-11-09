#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable number of numbers to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int y;

	va_start(x, n);

	for (y = 0; y < n; y++)
	{
		printf("%d", va_arg(x, int));
		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(x);
}
