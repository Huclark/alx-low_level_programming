#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *prev;
	unsigned long int idx = 0;

	if (!ht)
		return;

	while (idx < ht->size)
	{
		current = ht->array[idx];
		while (current)
		{
			free(current->key);
			free(current->value);
			prev = current;
			current = current->next;
			free(prev);
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
