#include "main.h"

/**
 * main - Check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = _isalpha('H');
	_putchar(x + '0');
	x= _isalpha('o');
	_putchar(x + '0');
	x = _isalpha(108);
	_putchar(x + '0');
	x = _isalpha(';');
	_putchar(x + '0');
	_putchar('\n');
	return (0);
}
