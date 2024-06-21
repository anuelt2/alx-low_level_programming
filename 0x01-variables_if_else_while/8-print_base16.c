#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hexadec;
	char hexalph;

	for (hexadec = 48; hexadec <= 57; hexadec++)
	{
		putchar(hexadec);
	}
	for (hexalph = 'a'; hexalph <= 'f'; hexalph++)
	{
		putchar(hexalph);
	}
	putchar('\n');
	return (0);
}
