#include "main.h"

/**
 * rot13 - Encondes string using rot13
 * @str: Parameter taken
 * Return: char
 */

char *rot13(char *str)
{
	int i, j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char translate[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr_al = alpha;
	char *ptr_tr = translate;

	for (i = 0; *(str + i) != 0; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(str + i) == *(ptr_al + j))
			{
				*(str + i) = *(ptr_tr + j);
				break;
			}
		}
	}
	return (str);
}
