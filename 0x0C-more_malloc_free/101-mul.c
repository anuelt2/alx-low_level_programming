#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _isdigit - Checks that string contains only digits (0 through 9)
 * @s: Parameter taken
 * Return: 1 (Success), 0 otherwise
 */

int _isdigit(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			_putchar(69);
			_putchar(114);
			_putchar(114);
			_putchar(111);
			_putchar(114);
			_putchar('\n');
			exit(98);
		}
	}

	return (1);
}

/**
 * main - Entry point - Multiplies two positive numbers
 * @argc: First parameter
 * @argv: Second parameter
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	unsigned int long mul;
	unsigned int long num1;
	unsigned int long num2;

	if (argc != 3)
	{
		_putchar(69);
		_putchar(114);
		_putchar(114);
		_putchar(111);
		_putchar(114);
		_putchar('\n');
		exit(98);
	}

	_isdigit(argv[1]);
	_isdigit(argv[2]);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%ld\n", mul);

	return (0);
}
