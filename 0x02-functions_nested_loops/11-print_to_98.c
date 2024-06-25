#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers to 98
 * @first_num: Is the first number printed
 *
 * Return: Void
 */
void print_to_98(int first_num)
{
	const int limit = 98;
	int i;

	if (first_num < 98)
	{
		for (i = first_num; i < 98; i++)
			printf("%d, ", i);
		printf("%d\n", limit);
	}
	else if (first_num > 98)
	{
		for (i = first_num; i > 98; i--)
			printf("%d, ", i);
		printf("%d\n", limit);
	}
	else
	{
		printf("%d\n", limit);
	}
}
