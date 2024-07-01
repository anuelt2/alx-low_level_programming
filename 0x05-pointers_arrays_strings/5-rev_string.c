#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Parameter taken
 * Return: Void
 */

void rev_string(char *s)
{
	int count;
	int index = 0;
	char string = s[0];

	while (s[index] != '\0')
		index++;

	for (count = 0; count < index; count++)
	{
		index--;
		string = s[count];
		s[count] = s[index];
		s[index] = string;
	}
}
