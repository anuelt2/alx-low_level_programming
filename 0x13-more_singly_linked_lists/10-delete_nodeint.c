#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index of a list
 * @head: Pointer to pointer to head of list
 * @index: Index of node to be deleted, counting from 0
 *
 * Return: 1 (Success)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *delete;
	unsigned int count;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	count = 0;
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && count < index - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	delete = temp->next;
	temp->next = delete->next;
	free(delete);

	return (1);

}
