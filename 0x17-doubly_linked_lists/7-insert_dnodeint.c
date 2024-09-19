#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new node at given position
 * @h: Pointer to pointer to head of list
 * @idx: Index of position for new node
 * @n: Element of new node
 *
 * Return: Address of new node, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	unsigned int count;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	temp = *h;
	count = 0;
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if ((temp == NULL || temp->next == NULL) && count != idx - 1)
	{
		free(new);
		return (NULL);
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
