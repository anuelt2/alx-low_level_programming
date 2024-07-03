#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First parameter
 * @s2: Second parameter
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;
	if (i == j)
		return (0);
	else if (i < j)
		return (-1);
	else
		return (1);
}
