#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

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
	i = 0;
	while (i < n - 1)
	{
		if (separator == NULL)
			continue;
		printf("%d, ", va_arg(agm, int));
		i++;
	}
	printf("%d\n", va_arg(agm, int));
}
