#include "main.h"
#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = _abs(-1);
	printf("%d\n", x);
	x = _abs(0);
	printf("%d\n", x);
	x = _abs(1);
	printf("%d\n", x);
	x = _abs(-98);
	printf("%d\n", x);
	return (0);
}
