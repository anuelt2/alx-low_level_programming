#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key
 *
 * Return: Value associated with the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *hash_node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	hash_node = ht->array[index];
	while (hash_node != NULL)
	{
		if (strcmp(hash_node->key, key) == 0)
		{
			return (hash_node->value);
		}
		hash_node = hash_node->next;
	}

	return (NULL);
}
