#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of teh skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, NULL otherwise
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp1, *temp2;

	if (list == NULL)
	{
		return (NULL);
	}
	temp1 = list;
	temp2 = NULL;
	while (temp1->express != NULL)
	{
		temp2 = temp1->express;
		printf("Value checked at index [%ld] = [%d]\n", temp2->index, temp2->n);

		if (temp2->n >= value)
		{
			break;
		}
		temp1 = temp2;
	}
	if (temp1->express == NULL)
	{
		temp2 = temp1;
		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
		}
	}
	printf("Value found between indexes [%ld] = [%ld]\n",
			temp1->index, temp2->index);
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
