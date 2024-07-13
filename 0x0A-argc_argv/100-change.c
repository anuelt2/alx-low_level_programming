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
	int change;
	int ch_num;

	ch_num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
	}

	while (change > 0)
	{
		if (change >= 25)
			change -= 25;
		else if (change >= 10)
			change -= 10;
		else if (change >= 5)
			change -= 5;
		else if (change >= 2)
			change -= 2;
		else if (change >= 1)
			change -= 1;
		ch_num += 1;
	}
	printf("%d\n", ch_num);

	return (0);
}
