#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Prints strings
 * @separator: First parameter
 * @n: Second parameter
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list stragm;
	char *temp;

	va_start(stragm, n);
	i = 0;
	while (i < n)
	{
		temp = va_arg(stragm, char *);
		if (temp == NULL)
		{
			temp = "(nil)";
		}
		printf("%s", temp);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(stragm);
}
