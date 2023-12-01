#include "hash_tables.h"

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/**
 * shash_table_create - Creates a sorted hash table
 * @size: Size of hash table
 *
 * Return: A pointer to the sorted hash table or
 *         NULL if it fails to create
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashtable = malloc(sizeof(shash_table_t));

	if (!hashtable)
		return (NULL);

	hashtable->array = calloc(size, sizeof(shash_node_t));
	if (!hashtable->array)
	{
		free(hashtable);
		return (NULL);
	}
	hashtable->shead = NULL;
	hashtable->stail = NULL;
	hashtable->size = size;

	return (hashtable);
}


/**
 * shash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update
 * @key: The key of the hash item
 * @value: The value of the hash item
 *
 * Return: 1 if successful or 0 if otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *current;
	unsigned long int idx;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key))
		{
			free(current->value);
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

	/* Set the key of the new node */
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}

	/* Set the value of the new node */
	new->value = strdup(value);
	if (!new->value)
	{
		free(new);
		free(new->key);
		return (0);
	}

	/* Update the new node to point to the beginning of list */
	new->next = ht->array[idx];

	/* Update head to the new node */
	ht->array[idx] = new;

	if (!ht->shead)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
		return (1);
	}
	current = ht->shead;
	if (strcmp(current->key, key) == 0)
	{
		while (current->snext && strcmp(current->snext->key, key) < 0)
			current = current->snext;
		new->sprev = current;
		new->snext = current->snext;

		if (!current->snext)
			ht->stail = new;
		else
			current->snext->sprev = new;
		return (1);
	}

	new->sprev = NULL;
	new->snext = current;
	current->sprev = new;
	ht->shead = new;
	return (1);
}


/**
 * shash_table_get - Fetches the value associated with a key
 * @ht: The hash table to search
 * @key: The key to look for
 *
 * Return: Value associated with the element or
 *         Null if key could not be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int idx;

	if (!ht || !key || *key == '\0')
		return (NULL);

	/* Fetch index for key/value pair */
	idx = key_index((const unsigned char *)key, ht->size);

	if (idx >= ht->size)
		return (NULL);

	current = ht->shead;
	while (current && strcmp(current->key, key) != 0)
		current = current->snext;

	/* Key not found, return NULL */
	return ((!current) ? NULL : current->value);
}


/**
 * shash_table_print - Prints a hash table
 * @ht: The hash table to print
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
		return; /* If hash table is empty, return quickly */

	printf("{"); /* Print opening curly bracket*/

	current = ht->shead;
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current)
			printf(", ");
	}
	printf("}\n"); /* Print closing curly bracket */
}


/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
		return;

	current = ht->stail;
	printf("{");
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *current, *prev;

	if (!ht)
		return;

	current = ht->shead;
	while (current)
	{
		prev = current;
		current = current->snext;
		free(prev->key);
		free(prev->value);
		free(prev);
	}

	free(head->array);
	free(head);
}
