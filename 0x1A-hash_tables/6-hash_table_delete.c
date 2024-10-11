#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 *
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *hash_node;
	hash_node_t *temp;

	if (ht == NULL)
	{
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		hash_node = ht->array[index];
		while (hash_node != NULL)
		{
			temp = hash_node;
			hash_node = hash_node->next;
			if (temp->key != NULL)
			{
				free(temp->key);
			}
			if (temp->value != NULL)
			{
				free(temp->value);
			}
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
