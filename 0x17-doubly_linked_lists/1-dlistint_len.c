#include "lists.h"

/**
 * dlistint_len - Finds the number of elements in a linked dlistint_t list
 * @h: Pointer to head of the list
 * Return: The number of elements in a list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_of_nodes = 0;
	const dlistint_t *node_ptr = h;

	if (!h)
		return (0);

	while (node_ptr->prev)
		node_ptr = node_ptr->prev;

	while (node_ptr)
	{
		no_of_nodes++;
		node_ptr = node_ptr->next;
	}

	return (no_of_nodes);
}
