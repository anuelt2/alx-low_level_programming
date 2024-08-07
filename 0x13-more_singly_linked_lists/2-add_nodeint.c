#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of a list
 * @head: Pointer to a pointer to the head of a list
 * @n: New element to be added
 *
 * Return: Address to new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
