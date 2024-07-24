#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: First parameter
 * @f: Second parameter
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
