#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */

typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

/* hash_table_create function prototype */
hash_table_t *hash_table_create(unsigned long int size);

/* hash_djb2 function prototype */
unsigned long int hash_djb2(const unsigned char *str);

/* key_index function prototype */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* hash_table_set function prototype */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/* hash_table_get function prototype */
char *hash_table_get(const hash_table_t *ht, const char *key);

/* hash_table_print function prototype */
void hash_table_print(const hash_table_t *ht);

/* hash_table_delete function prototype */
void hash_table_delete(hash_table_t *ht);

/* shash_table_create function prototype */
shash_table_t *shash_table_create(unsigned long int size);

/* shash_table_set function prototype */
int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/* shash_table_get function prototype */
char *shash_table_get(const shash_table_t *ht, const char *key);

/* shash_table_print function prototype */
void shash_table_print(const shash_table_t *ht);

/* shash_table_print_rev function prototype */
void shash_table_print_rev(const shash_table_t *ht);

/* shash_table_delete function prototype */
void shash_table_delete(shash_table_t *ht);

/* insrt_sorted function prototype */
int insert_sorted(shash_table_t *ht, shash_node_t *new_shash_node);

#endif
