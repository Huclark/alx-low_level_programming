#include "hash_tables.h"

/**
 * hash_table_get - Fetches the value associated with a key
 * @ht: The hash table to search
 * @key: The key to look for
 *
 * Return: Value associated with the element or
 *         Null if key could not be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int idx;

	if (!ht || !key || *key == '\0')
		return (NULL);

	/* Fetch index for key/value pair */
	idx = key_index((const unsigned char *)key, ht->size);

	/* Check if key exists */
	current = ht->array[idx];
	while (current)
	{
		/* Find a key match */
		if (strcmp(current->key, key) == 0)
			return (current->value); /* Key found, return value */
		current = current->next;
	}
	/* Key not found, return NULL */
	return (NULL);
}
