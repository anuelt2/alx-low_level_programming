#include "main.h"

/**
 * main - Check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	print_last_digit(98);
	print_last_digit(0);
	x = print_last_digit(-1024);
	_putchar('0' + x);
	_putchar('\n');
	return (0);
}
