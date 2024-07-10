#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Parameter taken
 * Return: Factorial of given number
 */

int factorial(int n)
{
	int f;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	f = n * factorial(n - 1);

	return (f);
}
