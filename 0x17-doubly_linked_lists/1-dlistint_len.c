#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a linked list
 * @h: Pointer to head of linked linked list
 *
 * Return: Number of elements in linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
