#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *dtr = "";
	char y = ',';

	va_list z;

	va_start(z, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", dtr, va_arg(z, int));
					break;
				case 'i':
					printf("%s%d", dtr, va_arg(z, int));
					break;
				case 'f':
					printf("%s%f", dtr, va_arg(z, double));
					break;
				case 's':
					str = va_arg(z, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", dtr, str);
					break;
				default:
					x++;
					continue;
			}
			x++;
			dtr = &y;
		}
	}
	printf("\n");
	va_end(z);
}
