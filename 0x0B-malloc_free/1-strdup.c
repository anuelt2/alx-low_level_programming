#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to allocated memory
 * @str: Parameter taken
 * Return: Pointer to allocated memory
 */

char *_strdup(char *str)
{
	char *strd;
	unsigned int size;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (str[size] != '\0')
		size++;
	size++;

	strd = malloc(size * sizeof(*strd));
	if (strd == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		strd[i] = str[i];
		i++;
	}

	return (strd);
}
