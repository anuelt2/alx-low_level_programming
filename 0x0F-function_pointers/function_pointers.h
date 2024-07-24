#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>

/* _putchar function prototype */
int _putchar(char c);

/* print_name function prototype */
void print_name(char *name, void (*f)(char *));

/* array_iterator function prototype */
void array_iterator(int *array, size_t size, void (*action)(int));

/* int_index function prototype */
int int_index(int *array, int size, int (*cmp)(int));

#endif
