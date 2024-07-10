#include "main.h"

/**
 * _strlen_p - Returns the length of a string
 * @s: Parameter taken
 * Return: Length of a string
 */

int _strlen_p(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_p(s + 1));
}

/**
 * str_check - Checks each string character from opposite ends for equality
 * @s: First parameter
 * @start: Second parameter
 * @end: Third parameter
 * Return: int
 */

int str_check(char *s, int start, int end)
{
	if (*(s + start) == *(s + end))
	{
		if (start == end || start == end + 1)
			return (1);
		return (0 + str_check(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome
 * @s: Parameter taken
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (str_check(s, 0, _strlen_p(s) - 1));
}
