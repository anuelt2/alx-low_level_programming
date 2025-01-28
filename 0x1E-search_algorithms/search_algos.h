#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stddef.h>
#include <math.h>

/* linear_search function prototype */
int linear_search(int *array, size_t size, int value);

/* binary_search function prototype */
int binary_search(int *array, size_t size, int value);

/* jump_search function prototype */
int jump_search(int *array, size_t size, int value);

/* interpolation_search function prototype */
int interpolation_search(int *array, size_t size, int value);

/* exponential_search function prototype */
int exponential_search(int *array, size_t size, int value);

/* advanced_binary function prototype */
int advanced_binary(int *array, size_t size, int value);

#endif
