#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* _putchar function prototype */
int _putchar(char c);

/* print_list function prototype */
size_t print_list(const list_t *h);

/* list_len function prototype */
size_t list_len(const list_t *h);

/* add_node function prototype */
list_t *add_node(list_t **head, const char *str);

/* add_node_end function prototype */
list_t *add_node_end(list_t **head, const char *str);

/* free_list function prototype */
void free_list(list_t *head);

/* first_constructor function prototype */
void first_constructor(void);

#endif
