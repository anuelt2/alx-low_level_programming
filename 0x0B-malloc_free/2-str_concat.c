#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: First parameter
 * @s2: Second parameter
 * Return: Pointer to allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	char *s12;
	unsigned int size1, size2, size12, i, j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	size1 = size2 = i = j = 0;
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	size2++;
	size12 = size1 + size2;
	s12 = malloc(size12 * sizeof(*s12));
	if (s12 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s12[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s12[i] = s2[j];
		i++;
		j++;
	}
	s12[i] = '\0';
	return (s12);
}
