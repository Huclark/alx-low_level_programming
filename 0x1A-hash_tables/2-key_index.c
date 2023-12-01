#include "hash_tables.h"

/**
 * key_index - Fetches the index of a key in a hash table
 * @key: Key to fetch
 * @size: Size of the array of the hash table
 * Return: The index at which the key/value pair should be
 *         stored in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Determine hash value using hash_djb2 */
	unsigned long int idx = hash_djb2(key);

	/* Determine the index and return it */
	return (idx % size);
}
