#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: First parameter
 * @argv: Second parameter
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
