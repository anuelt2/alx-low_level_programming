#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: Key of key/value pair
 * @size: Size of the array of the hash table
 *
 * Return: Index at which key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
