#include "main.h"
#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "ROT13 (\"rotate by 13 places\", somtimes hyphenated ROT-13)"
	       "	is a simple letter substitution cipher.\n";
	char *p;

	p = rot13(s);
	printf("%s", p);
	printf("-------------------------------------\n");
	printf("%s", s);
	printf("-------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("-------------------------------------\n");
	printf("%s", s);
	printf("-------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("-------------------------------------\n");
	printf("%s", s);

	return (0);
}
