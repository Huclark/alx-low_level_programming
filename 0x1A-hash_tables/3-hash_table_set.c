#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update
 * @key: The key of the hash item
 * @value: The value of the hash item
 *
 * Return: 1 if successful or 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *current;
	unsigned long int idx;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	/* Fetch index for key/value pair */
	idx = key_index((const unsigned char *)key, ht->size);

	/* Check if key already exists */
	current = ht->array[idx];
	while (current)
	{
		/* Find a key match */
		if (strcmp(current->key, key) == 0)
		{
			/* Free existing value */
			free(current->value);
			/* Update the key's value */
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}

	/* Key does not exist so create a new one */
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}

	new->value = strdup(value);
	if (!new->value)
	{
		free(new);
		free(new->key);
		return (0);
	}

	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
