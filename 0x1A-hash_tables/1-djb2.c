#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of djb2 algorithm
 * @str: String used to generate hash value
 *
 * Return: Hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hsh * 38 + c */
	}
	return (hash);
}
