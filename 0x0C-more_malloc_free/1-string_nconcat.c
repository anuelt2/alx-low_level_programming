#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Cancatenates two strings
 * @s1: First parameter
 * @s2: Second parameter
 * @n: Third parameter
 * Return: Concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s12;
	unsigned int size1, size2, size12, i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = size2 = i = j = k = 0;
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (n < size2)
		size2 = n;
	size2++;
	size12 = size1 + size2;

	s12 = malloc(size12 * sizeof(*s12));
	if (s12 == NULL)
		return (NULL);
	while (s1[i] != '\0')
		s12[i++] = s1[k++];
	while (j < size2 - 1)
		s12[i++] = s2[j++];
	s12[i] = '\0';
	return (s12);
}
