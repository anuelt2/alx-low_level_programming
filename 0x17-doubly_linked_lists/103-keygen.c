#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - Keygen for crackme file
 * @argc: Number of commandline arguments given
 * @argv: Array of pointers to commandline arguments given
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	char password[7];
	const char *codex;
	int length, i, temp;
	(void)argc;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	length = strlen(argv[1]);
	temp = (length ^ 59) & 63;
	password[0] = codex[temp];
	temp = 0;
	for (i = 0; i < length; i++)
	{
		temp += argv[1][i];
	}
	password[1] = codex[(temp ^ 79) & 63];
	temp = 1;
	for (i = 0; i < length; i++)
	{
		temp *= argv[1][i];
	}
	password[2] = codex[(temp ^ 85) & 63];
	temp = 0;
	for (i = 0; i < length; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	password[3] = codex[rand() & 63];
	temp = 0;
	for (i = 0; i < length; i++)
		temp += (argv[1][i] * argv[1][i]);
	password[4] = codex[(temp ^ 239) & 63];
	temp = 0;
	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	password[5] = codex[(temp ^ 229) & 63];
	password[6] = '\0';
	printf("%s", password);
	return (0);
}
