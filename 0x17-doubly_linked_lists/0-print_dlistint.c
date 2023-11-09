#include "lists.h"

/**
 * print_dlistint - Prints all the elements of dlistint_t list
 * @h: Pointer to head of dlistint_t list
 * Return: The number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_of_nodes = 0;
	const dlistint_t *node_ptr = h;

	if (!h)
		return (no_of_nodes);

	while (node_ptr->prev)
		node_ptr = node_ptr->prev;

	while (node_ptr)
	{
		printf("%d\n", node_ptr->n);
		no_of_nodes++;
		node_ptr = node_ptr->next;
	}

	return (no_of_nodes);
}
