#include "main.h"

/**
 * power_base - function calculates base ^ power
 * @base: base of exponent
 * @power: power of exponent
 * Return: value
 */

unsigned long int power_base(unsigned int base, unsigned int power)
{
	unsigned long int x;
	unsigned int y;

	x = 1;
	for (y = 1; y <= power; y++)
		x *= base;
	return (x);
}

/**
 * print_binary - function prints the binary representation of a number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int x, y;
	char z;

	z = 0;
	x = power_base(2, sizeof(unsigned long int) * 8 - 1);
	while (x != 0)
	{
		y = n & x;
		if (y == x)
		{
			z = 1;
			_putchar('1');
		}
		else if (z == 1 || x == 1)
		{
			_putchar('0');
		}
		x >>= 1;
	}
}
