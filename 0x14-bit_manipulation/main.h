#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

/* _putchar function prototype */
int _putchar(char c);

/* binary_to_uint function prototype */
unsigned int binary_to_uint(const char *b);

/* print_binary function prototype */
void print_binary(unsigned long int n);

/* get_bit function prototype */
int get_bit(unsigned long int n, unsigned int index);

/* set_bit function prototype */
int set_bit(unsigned long int *n, unsigned int index);

/* clear_bit function prototype */
int clear_bit(unsigned long int *n, unsigned int index);

/* flip_bits function prototype */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* get_endianness function prototype */
int get_endianness(void);

#endif
