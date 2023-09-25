#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: A pointer to a node
 * Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_counter++;
	}

	return (node_counter);
}