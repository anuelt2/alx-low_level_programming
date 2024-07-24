#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Returns sum of two integers
 * @a: First parameter
 * @b: Second parameter
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns difference of two integers
 * @a: First parameter
 * @b: Second parameter
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns product of two integers
 * @a: First parameter
 * @b: Second parameter
 * Return: Product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns quotient of two integers
 * @a: First parameter
 * @b: Second parameter
 * Return: Quotient of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns modulus of two integers
 * @a: First parameter
 * @b: Second parameter
 * Return: Modulus of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
