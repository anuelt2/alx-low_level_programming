#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The number to be checked
 * Return: absolute n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n - n - n);
}
