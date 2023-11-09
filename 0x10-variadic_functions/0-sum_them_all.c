#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: parameter
 * @...: variable number of paramters to calculate the sum of
 * Return: n == 0
 * Otherwise - sum of parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int y, sum = 0;

	va_start(x, n);
	for (y = 0; y < n; y++)
		sum += va_arg(x, int);

	va_end(x);

	return (sum);
}
