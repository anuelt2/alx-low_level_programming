#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt == 'e' || alphabt == 'q')
		{
			continue;
		}
		putchar(alphabt);
	}
	putchar('\n');
	return (0);
}
