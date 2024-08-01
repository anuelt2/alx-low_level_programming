#include <stdio.h>

void first_constructor(void)__attribute__((constructor));

/**
 * first_constructor - Runs before main function is executed
 *
 * Return: Void
 */

void first_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
