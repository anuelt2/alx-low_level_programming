#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list
 * @h: Pointer to head of listint_t
 *
 * Return: Number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
