#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: First parameter
 * @f: Second parameter
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
