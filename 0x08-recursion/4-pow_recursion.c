#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power y
 * @x: First parameter
 * @y: Second parameter
 * Return: Returns the value of x raised to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	x *= _pow_recursion(x, (y - 1));

	return (x);
}
