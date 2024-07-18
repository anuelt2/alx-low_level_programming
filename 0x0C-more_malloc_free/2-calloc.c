#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: First parameter
 * @size: Second parameter
 * Return: Void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);

	memset(array, 0, nmemb * size);

	return (array);
}
