#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: First parameter
 * @av: Second parameter
 * Return: Pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *str, *arg;
	int size = 0, i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		j = 0;
		while (arg[j++])
			size++;
		size++;
	}
	str = malloc((size + 1) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	for (i = 0, j = 0; i < ac && j < size; i++)
	{
		arg = av[i];
		k = 0;
		while (arg[k])
		{
			str[j++] = arg[k++];
		}
		str[j++] = '\n';
	}
	str[j] = '\0';
	return (str);
}
