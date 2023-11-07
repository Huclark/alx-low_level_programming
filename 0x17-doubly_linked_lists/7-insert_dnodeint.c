#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
* @h: A pointer to a pointer to the head of dlistint_t list
* @idx: Index of the list where new node should be added (starts at 0)
* @n: Integer to be added to new node to be inserted to dlistint_t list
* Return: The address of the new node
*         Or NULL if it failed or not possible to add new node at idx
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1)
	{
		current = current->next;
		if (!current)
			return (NULL);
		idx--;
	}

	if (!current->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
