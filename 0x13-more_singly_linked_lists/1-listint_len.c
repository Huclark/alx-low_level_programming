#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: Node pointer
 * Return: Number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t no_of_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		no_of_elements += 1;
	}

	return (no_of_elements);
}
