#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to head of list_t
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", (*h).len, (*h).str);
		h = (*h).next;
		count++;
	}
	return (count);
}
