#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list_t list
 * @head: Pointer to pointer to head of list_t list
 * @str: Pointer to string element to be added
 *
 * Return: Address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	(*new).str = strdup(str);
	if ((*new).str == NULL)
	{
		free(new);
		return (NULL);
	}
	(*new).len = strlen(str);
	(*new).next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		list_t *temp = *head;

		while ((*temp).next != NULL)
			temp = (*temp).next;
		(*temp).next = new;
	}

	return (new);
}
