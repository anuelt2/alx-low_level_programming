#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index of list
 * @head: Pointer to pointer to head of list
 * @index: Index at which to delete node
 *
 * Return: 1 for success, -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;
		}
		free(temp);
		return (1);
	}
	count = 0;
	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);

	return (1);
}
