#include "lists.h"

/**
 * reverse_listint - Reverses a list
 * @head: Pointer to pointer to head of list
 *
 * Return: Pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node;
	listint_t *current_node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	previous_node = NULL;
	current_node = *head;
	while (current_node != NULL)
	{
		*head = current_node->next;
		current_node->next = previous_node;
		previous_node = current_node;
		current_node = *head;
	}
	*head = previous_node;
	return (*head);
}
