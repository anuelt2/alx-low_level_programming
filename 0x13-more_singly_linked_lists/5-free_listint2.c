#include "lists.h"

/**
 * free_listint2 - Frees list and sets head to NULL
 * @head: Pointer to pointer to head of list
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next_node;

	if (head == NULL)
	{
		return;
	}

	temp = *head;
	while (temp != NULL)
	{
		next_node = temp;
		temp = temp->next;
		free(next_node);
	}
	*head = NULL;
}
