#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: First parameter
 * @argv: Second parameter
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j;
	int sum;
	char *s;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			for (j = 0; j < strlen(s); j++)
			{
				if (s[j] < 48 || s[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		sum += atoi(s);
		}
		printf("%d\n", sum);
	}

	return (0);
}
