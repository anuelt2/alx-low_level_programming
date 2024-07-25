#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes
 * @main_add: First parameter
 * @bytes: Second parameter
 * Return: Void
 */

void print_opcodes(unsigned char *main_add, int bytes)
{
	int i;

	i = 0;
	while (i < bytes)
	{
		printf("%.2x", main_add[i]);
		if (i < bytes - 1)
			printf(" ");
		i++;
	}
	printf("\n");
}

/**
 * main - Entry point
 * @argc: First parameter
 * @argv: Second parameter
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((unsigned char *)&main, bytes);

	return (0);
}
