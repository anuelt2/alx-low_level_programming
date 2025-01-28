#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using
 * Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in @list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where @value is located, NULL otherwise
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp1, *temp2;
	size_t i, mark, jump;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}

	temp1 = list;
	temp2 = list;
	jump = (size_t)sqrt(size);

	while (temp2->next != NULL && temp2->n < value)
	{
		temp1 = temp2;
		mark = temp1->index;

		for (i = 0; i < jump && temp2->next != NULL; i++)
		{
			temp2 = temp2->next;
		}
		printf("Value check at index [%ld] = [%d]\n", temp2->index, temp2->n);
		if (temp2->n >= value)
		{
			break;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", mark, temp2->index);
	while (temp1 != NULL && temp1->index <= temp2->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", temp1->index, temp1->n);
		if (temp1->n == value)
		{
			return (temp1);
		}
		temp1 = temp1->next;
	}

	return (NULL);
}
