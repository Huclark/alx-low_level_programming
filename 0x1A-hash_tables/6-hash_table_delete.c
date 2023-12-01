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
		return; /* Return quickly if hash table is NULL*/

	/* Loop through hash table to free */
	while (idx < ht->size)
	{
		/* Traverse each item to free each node */
		current = ht->array[idx];
		while (current)
		{
			free(current->key);
			free(current->value);
			prev = current; /* store current address in prev pointer */
			current = current->next; /* point to the next node */
			free(prev); /* free previous node */
		}
		idx++;
	}
	free(ht->array); /* free array of pointers to linked list */
	free(ht); /* free hashtable */
}
