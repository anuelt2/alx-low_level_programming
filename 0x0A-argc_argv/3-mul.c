#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: First parameter
 * @argv: Second parameter
 * Return: Always 0 (Success) or 1 (Failure)
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (argc == 3)
		printf("%d\n", num1 * num2);

	return (0);
}
