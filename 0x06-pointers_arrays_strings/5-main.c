#include "main.h"
#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
