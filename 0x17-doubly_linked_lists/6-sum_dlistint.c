#include "lists.h"

/**
 * sum_dlistint - Sums all the data of list
 * @head: Pointer to head of list
 *
 * Return: Sum of data of list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
