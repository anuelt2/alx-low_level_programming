#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * @separator: First parameter
 * @n: Second parameter
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list agm;

	va_start(agm, n);
	if (separator)
	{
		i = 0;
		while (i < n - 1)
		{
			printf("%d, ", va_arg(agm, int));
			i++;
		}
		printf("%d\n", va_arg(agm, int));
	}
}
