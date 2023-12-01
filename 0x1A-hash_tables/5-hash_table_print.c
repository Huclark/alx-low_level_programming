#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long idx = 0;
	int flag = 1; /* Flag to check if it's first item in hash table */

	if (!ht)
		return; /* If hash table is empty, return quickly */

	printf("{"); /* Print opening curly bracket*/

	/* loop through hastable */
	while (idx < ht->size)
	{
		/* Print each item's key/value pair */
		current = ht->array[idx];
		while (current)
		{
			if (!flag)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			flag = 0; /* Update flag */
			current = current->next;
		}
		idx++;
	}
	printf("}\n"); /* Print closing curly bracket */
}
