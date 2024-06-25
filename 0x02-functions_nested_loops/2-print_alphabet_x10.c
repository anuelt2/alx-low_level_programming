#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase, x10
 *
 * Return: Void (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int lower_alpha;

	while (i < 10)
	{
		for (lower_alpha = 97; lower_alpha <= 122; lower_alpha++)
			_putchar(lower_alpha);
		_putchar('\n');
		i++;
	}
}
