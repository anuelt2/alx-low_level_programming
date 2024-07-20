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
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			exit(98);
		}
	}

	return (1);
}

/**
* _strlen - Checks legnth of string
* @num1: First parameter
* @num2: Second parameter
* Return: Length of string
*/

int _strlen(char *num1, char *num2)
{
	int m;
	int n;
	int size;

	m = strlen(num1);
	n = strlen(num2);
	size = m + n;

	return (size);
}

/**
 * mulstr - Multiplies two strings
 * @num1: First parameter
 * @num2: Second parameter
 * @size: Third parameter
 * Return: Array
 */

int *mulstr(char *num1, char *num2, int size)
{
	int i, j, m, n, digit1, digit2, *arr;

	m = strlen(num1);
	n = strlen(num2);

	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	memset(arr, 0, size * sizeof(*arr));

	for (i = m - 1; i >= 0; --i)
	{
		digit1 = num1[i] - '0';
		for (j = n - 1; j >= 0; --j)
		{
			digit2 =  num2[j] - '0';
			arr[i + j + 1] += digit1 * digit2;
		}
	}

	for (i = size - 1; i > 0; --i)
	{
		arr[i - 1] += arr[i] / 10;
		arr[i] %= 10;
	}

	return (arr);
}

/**
 * arr_to_str - Converts array to string
 * @arr: First parameter
 * @size: Second parameter
 * Return: String
 */

char *arr_to_str(int *arr, int size)
{
	int i;
	int k;
	char *starr;

	i = 0;
	while (arr[i] == 0 && i < size - 1)
		i++;

	starr = malloc((size + 1) * sizeof(*starr));
	if (starr == NULL)
	{
		free(arr);
		return (NULL);
	}

	k = 0;
	for (; i < size; ++i)
		starr[k++] = '0' + arr[i];
	starr[k] = '\0';
	free(arr);

	return (starr);
}

/**
* main - Entry point - Multiplies two positive numbers
* @argc: First parameter
* @argv: Second parameter
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	char *mul;
	char *num1;
	char *num2;
	int *arr;
	int size;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	_isdigit(argv[1]);
	_isdigit(argv[2]);

	num1 = argv[1];
	num2 = argv[2];
	size = _strlen(num1, num2);
	arr = mulstr(num1, num2, size);
	mul = arr_to_str(arr, size);
	printf("%s\n", mul);

	return (0);
}
