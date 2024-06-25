#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: Void (Success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
