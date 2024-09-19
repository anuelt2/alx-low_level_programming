#include "lists.h"

/**
 * free_dlistint - Frees list
 * @head: Pointer to head of list
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *next;

	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
