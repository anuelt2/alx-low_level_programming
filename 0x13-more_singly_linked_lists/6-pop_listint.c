#include "lists.h"

/**
 * pop_listint - Deletes head node of listint_t linked list
 * @head: Pointer to pointer of head of list
 *
 * Return: Head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL)
	{
		return (0);
	}
	temp = *head;
	num = temp->n;
	*head = (*head)->next;
	free(temp);

	return (num);
}
