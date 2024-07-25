#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints everything
 * @format: First parameter
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	int i;
	int check;
	char *temp;
	va_list args;

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				check = 0;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				check = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				check = 0;
				break;
			case 's':
				temp = va_arg(args, char *);
				if (temp == NULL)
					temp = "(nil)";
				printf("%s", temp);
				check = 0;
				break;
			default:
				check = 1;
				break;
		}
		if (format[i + 1] != '\0' && check == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
