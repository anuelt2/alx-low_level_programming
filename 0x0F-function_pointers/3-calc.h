#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* op_add function prototype */
int op_add(int a, int b);

/* op_sub function prototype */
int op_sub(int a, int b);

/* op_mul function prototype */
int op_mul(int a, int b);

/* op_div function prototype */
int op_div(int a, int b);

/* op_mod function prototype */
int op_mod(int a, int b);

/* get_op_func function prototype */
int (*get_op_func(char *s))(int, int);

#endif
