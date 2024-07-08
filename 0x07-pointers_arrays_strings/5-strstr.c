#include "main.h"
#include <stdlib.h>

/**
 * _strstr - Locates a substring
 * @haystack: First parameter
 * @needle: Second parameter
 * Return: Pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (*(haystack + i) == *(needle + i))
		{
			do {
				if (*(needle + i + 1) == '\0')
					return (haystack);
				i++;
			} while (*(haystack + i) == *(needle + i));
		}
		haystack++;
	}
	return (NULL);
}
