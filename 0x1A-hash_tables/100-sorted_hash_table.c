#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: Size of array
 *
 * Return: Pointer to newly created sorted hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;

	if (size == 0)
	{
		return (NULL);
	}

	shash_table = calloc(1, sizeof(shash_table_t));
	if (shash_table == NULL)
	{
		return (NULL);
	}

	shash_table->size = size;
	shash_table->array = calloc(size, sizeof(shash_node_t *));
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}

	shash_table->shead = NULL;
	shash_table->stail = NULL;

	return (shash_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 for success, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	shash_node_t *shash_node, *new_shash_node;
	char *cpy_key, *cpy_value;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	cpy_value = strdup(value);
	if (cpy_value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	shash_node = ht->array[index];
	while (shash_node != NULL)
	{
		if (strcmp(shash_node->key, key) == 0)
		{
			free(shash_node->value);
			shash_node->value = cpy_value;
			return (1);
		}
		shash_node = shash_node->next;
	}
	new_shash_node = calloc(1, sizeof(shash_node_t));
	if (new_shash_node == NULL)
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
	new_shash_node->key = cpy_key;
	new_shash_node->value = cpy_value;
	new_shash_node->next = ht->array[index];
	ht->array[index] = new_shash_node;
	if (!insert_sorted(ht, new_shash_node))
		return (0);
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: The sorted hash table
 * @key: The key
 *
 * Return: Value associated with the key
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned int index;
	shash_node_t *shash_node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	shash_node = ht->array[index];
	while (shash_node != NULL)
	{
		if (strcmp(shash_node->key, key) == 0)
		{
			return (shash_node->value);
		}
		shash_node = shash_node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The sorted hash table
 *
 * Return: Void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *shash_node;
	int print_flag;

	if (ht == NULL)
	{
		return;
	}

	print_flag = 0;
	printf("{");
	shash_node = ht->shead;
	while (shash_node != NULL)
	{
		if (print_flag == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", shash_node->key, shash_node->value);
		print_flag = 1;
		shash_node = shash_node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse
 * @ht: The sorted hash table
 *
 * Return: Void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *shash_node;
	int print_flag;

	if (ht == NULL)
	{
		return;
	}

	print_flag = 0;
	printf("{");
	shash_node = ht->stail;
	while (shash_node != NULL)
	{
		if (print_flag == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", shash_node->key, shash_node->value);
		print_flag = 1;
		shash_node = shash_node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table
 *
 * Return: Void
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned int index;
	shash_node_t *shash_node;
	shash_node_t *temp;

	if (ht == NULL)
	{
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		shash_node = ht->array[index];
		while (shash_node != NULL)
		{
			temp = shash_node;
			shash_node = shash_node->next;
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

/**
 * insert_sorted - Inserts new node into sorted list
 * @ht: The sorted hash table
 * @new_shash_node: New node
 *
 * Return: 1 on success, 0 otherwise
 */

int insert_sorted(shash_table_t *ht, shash_node_t *new_shash_node)
{
	shash_node_t *shash_node;

	shash_node = ht->shead;
	if (ht->shead == NULL)
	{
		ht->shead = new_shash_node;
		ht->stail = new_shash_node;
		return (1);
	}
	while (shash_node != NULL && strcmp(shash_node->key, new_shash_node->key) < 0)
	{
		shash_node = shash_node->snext;
	}
	if (shash_node == ht->shead)
	{
		new_shash_node->snext = ht->shead;
		ht->shead->sprev = new_shash_node;
		ht->shead = new_shash_node;
	}
	else if (shash_node == NULL)
	{
		ht->stail->snext = new_shash_node;
		new_shash_node->sprev = ht->stail;
		ht->stail = new_shash_node;
	}
	else
	{
		new_shash_node->sprev = shash_node->sprev;
		new_shash_node->snext = shash_node;
		if (shash_node->sprev != NULL)
		{
			shash_node->sprev->snext = new_shash_node;
		}
		shash_node->sprev = new_shash_node;
	}

	return (1);
}
