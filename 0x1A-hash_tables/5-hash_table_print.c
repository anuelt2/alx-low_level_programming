#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 *
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *hash_node;
	int print_flag;

	if (ht == NULL)
	{
		return;
	}

	print_flag = 1;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		hash_node = ht->array[index];
		while (hash_node != NULL)
		{
			if (print_flag == 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", hash_node->key, hash_node->value);
			print_flag = 0;
			hash_node = hash_node->next;
		}
	}
	printf("}\n");
}
