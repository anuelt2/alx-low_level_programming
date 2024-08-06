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

/* listint_len function prototype */
size_t listint_len(const listint_t *h);

/* add_nodeint function prototype */
listint_t *add_nodeint(listint_t **head, const int n);

/* add_nodeint_end function prototype */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* free_listint function prototype */
void free_listint(listint_t *head);

/* free_listint2 function prototype */
void free_listint2(listint_t **head);

#endif
