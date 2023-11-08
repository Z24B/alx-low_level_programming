#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of 2 variables
 * @a: parameter
 * @b: second parameter
 * Return: a+b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between 2 variables
 * @a: parameter
 * @b: second parameter
 * Return: a-b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of 2 variables
 * @a: parameter
 * @b: second parameter
 * Return: a*b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of 2 variables
 * @a: parameter
 * @b: second parameter
 * Return: a/b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -  remainder of the division of 2 variables
 * @a: parameter
 * @b: second parameter
 * Return: remainder of a/b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
