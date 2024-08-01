#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to head of list_t linked list
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *next_node;

	while (temp)
	{
		next_node = (*temp).next;
		free((*temp).str);
		free(temp);
		temp = next_node;
	}
}
