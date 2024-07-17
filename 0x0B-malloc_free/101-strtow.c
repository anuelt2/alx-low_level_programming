#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * word_count - Gets word count in a string
 * @str: Parameter taken
 * Return: Word count
 */

int word_count(char *str)
{
	int w_count;
	int w_flag;

	w_count = w_flag = 0;
	while (*str != '\0')
	{
		if (*str != 32 && w_flag == 0)
		{
			w_flag = 1;
			w_count++;
		}
		else if (*str == 32)
			w_flag = 0;
		str++;
	}

	return (w_count);
}

/**
 * wordcpy - Copies words in a string into an array
 * @array: First parameter
 * @str: Second parameter
 * Return: Void
 */

void wordcpy(char **array, char *str)
{
	int i;
	int j;
	int start;
	int end;
	int slen;

	start = end = i = 0;
	while (str[start] != '\0')
	{
		while (str[start] == 32)
		{
			start++;
		}
		end = start;
		while (str[end] != '\0' && str[end] != 32)
			end++;
		if (end > start)
		{
			slen = end - start;

			array[i] = malloc((slen + 1) * sizeof(char));
			if (array[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(array[j]);
				free(array);
			}
			strncpy(array[i], str + start, slen);
			array[i][slen] = '\0';
			i++;
			start = end;
		}
	}
	array[i] = NULL;
}

/**
 * strtow - Splits string into words
 * @str: Parameter taken
 * Return: Pointer to an array of strings
 */

char **strtow(char *str)
{
	char **warray;
	int w_num;

	if (str == NULL || *str == '\0')
		return (NULL);

	w_num = word_count(str);
	if (w_num == 0)
		return (NULL);

	warray = malloc((w_num + 1) * sizeof(*warray));
	if (warray == NULL)
		return (NULL);
	wordcpy(warray, str);

	return (warray);
}
