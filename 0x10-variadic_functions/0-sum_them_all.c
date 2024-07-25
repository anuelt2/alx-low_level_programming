#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum of all its parameters
 * @n: First parameter
 * Return: Sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int p_sum;
	va_list param;

	if (n == 0)
		return (0);

	va_start(param, n);
	p_sum = 0;
	i = 0;
	while (i < n)
	{
		p_sum += va_arg(param, int);
		i++;
	}

	return (p_sum);
}
