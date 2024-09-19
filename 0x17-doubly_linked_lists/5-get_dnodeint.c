#include "lists.h"

/**
 * get_dnodeint_at_index - Returns node of a list at an index
 * @head: Pointer to head of list
 * @index: Index of node to return
 *
 * Return: Node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}
