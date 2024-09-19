#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end of a list
 * @head: Pointer to pointer to head of list
 * @n: Element to be added
 *
 * Return: Address of new element, or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tail;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = new;
	new->prev = tail;

	return (new);
}
