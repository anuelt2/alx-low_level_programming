#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Pointer to head of list
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *next_node;

	while (temp != NULL)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}
}
