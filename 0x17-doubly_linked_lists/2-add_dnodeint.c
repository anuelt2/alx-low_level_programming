#include "lists.h"

/**
 * add_dnodeint - Addds a new node at the beginning of a list
 * @head: Pointer to pointer to head of list
 * @n: Element to be added
 *
 * Return: Address of the new element of NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
