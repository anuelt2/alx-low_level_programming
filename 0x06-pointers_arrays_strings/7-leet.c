#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Parameter taken
 * Return: char
 */

char *leet(char *str)
{
	int i;
	int j;
	char letter[] = "AaEeOoTtLl";
	char encoding[] = "4433007711";

	char *ptr_le = letter;
	char *ptr_en = encoding;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(str + i) == *(ptr_le + j))
			{
				*(str + i) = *(ptr_en + j);
			}
		}
	}
	return (str);
}
