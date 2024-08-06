#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Singly linked list
 * @n: Integer
 * @next: Points to the next node
 *
 * Description: Singly linked list node structure
 *
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* _putchar function prototype */
int _putchar(char c);

/* print_listint function prototype */
size_t print_listint(const listint_t *h);

#endif
