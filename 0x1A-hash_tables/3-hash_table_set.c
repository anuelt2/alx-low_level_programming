#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 for success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *hash_node, *new_hash_node;
	char *cpy_key, char *cpy_value;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}
	cpy_value = strdup(value);
	if (cpy_value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	hash_node = ht->array[index];
	while (hash_node != NULL)
	{
		if (strcmp(hash_node->key, key) == 0)
		{
			free(hash_node->value);
			hash_node->value = cpy_value;
			return (1);
		}
		hash_node = hash_node->next;
	}
	new_hash_node = calloc(1, sizeof(hash_node_t));
	if (new_hash_node == NULL)
	{
		free(cpy_value);
		return (0);
	}
	cpy_key = strdup(key);
	if (cpy_key == NULL)
	{
		free(cpy_value);
		return (0);
	}
	new_hash_node->key = cpy_key;
	new_hash_node->value = cpy_value;
	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;
	return (1);
}
