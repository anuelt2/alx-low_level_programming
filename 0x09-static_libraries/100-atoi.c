#include "main.h"

/**
 * _atoi - Converts string to integer
 * @s: Parameter taken
 * Return: Integer
 */

int _atoi(char *s)
{
	unsigned int length = 0;
	unsigned int numdigit = 0;
	unsigned int num = 0;
	int numfind = 0;
	unsigned int negsign = 0;
	unsigned int i = 0;

	while (*(s + length) != '\0')
		length++;
	while (i < length && numfind == 0)
	{
		if (*(s + i) == '-')
			++negsign;
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			numdigit = *(s + i) - '0';
			if (negsign % 2 == 1)
				numdigit = -numdigit;
			num = num * 10 + numdigit;
			numfind = 1;
			if (*(s + (i + 1)) < '0' || *(s + (i + 1)) > '9')
				break;
			numfind = 0;
		}
		i++;
	}
	if (numfind == 0)
		return (0);
	return (num);
}
