#include "main.h"

/**
 * _sqrt - Returns the natural square root of a number
 * @x: First parameter
 * @i: Second parameter
 * Return: Natural square root of a number
 */

int _sqrt(int x, int i)
{
	if (i * i == x)
		return (i);
	else if (i * i > x)
		return (-1);
	else
		return (_sqrt(x, (i + 1)));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Parameter taken
 * Return: Natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
