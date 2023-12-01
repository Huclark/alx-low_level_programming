#include "hash_tables.h"

/**
 * hash_table_create - Creates a hast table
 * @size: Size of the array
 * Return: A pointer to the newly created hash table or
 *         Null if it fails to create
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = malloc(sizeof(hash_table_t));

	if (!hashtable)
		return (NULL);

	hashtable->array = calloc(size, sizeof(hash_node_t *));

	if (!hashtable->array)
	{
		free(hashtable);
		return (NULL);
	}

	hashtable->size = size;

	return (hashtable);
}
