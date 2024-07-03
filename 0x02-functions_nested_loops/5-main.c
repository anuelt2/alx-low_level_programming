#include "main.h"

/**
 * main - Check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(x + '0');
	_putchar('\n');
	x = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(x + '0');
	_putchar('\n');
	x = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(x + '0');
	_putchar('\n');
	x = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(x + '0');
	_putchar('\n');
	return (0);
}
