#include "main.h"

/**
 * _prime - Returns 1 if the input integer is a prime number
 * @num: First parameter
 * @i: Second parameter
 * Return: 1 if prime number, 0 otherwise
 */

int _prime(int num, int i)
{
	if (i > 1 && i < num && num % i == 0)
		return (0);
	else if (i == num)
		return (1);
	else
		return (_prime(num, (i + 1)));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: Parameter taken
 * Return: 1 if prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_prime(n, 2));
}
