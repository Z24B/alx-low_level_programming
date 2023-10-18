#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @n: string
 * Return: changed string
 */

char *cap_string(char *n)
{
	int x, y;
	int i[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	x = 0;
	while (*(n + x) != '\0')
	{
		if (*(n + x) >= 'a' && *(n + x) <= 'z')
		{
			if (x == 0)
			{
				*(n + x) = *(n + x) - 32;
			}
			else
			{
				for (y = 0 ; y <= 12; y++)
				{
					if (i[y] == *(n + x - 1))
					{
						*(n + x) = *(n + x) - 32;
					}
				}
			}
		}
		x++;
	}
	return (n);
}
