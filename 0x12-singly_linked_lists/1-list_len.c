#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to head of list_t linked list
 *
 * Return: Number of elements in list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = (*h).next;
		count++;
	}

	return (count);
}
