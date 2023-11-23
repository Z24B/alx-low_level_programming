#include "main.h"

/**
 * flip_bits - function returns the number of bits needed
 * to flip to get from one number to another
 * @n: number
 * @m: number 1
 * Return: bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y = 0;
	unsigned long int a;
	unsigned long int b = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		a = b >> x;
		if (a & 1)
			y++;
	}
	return (y);
}
