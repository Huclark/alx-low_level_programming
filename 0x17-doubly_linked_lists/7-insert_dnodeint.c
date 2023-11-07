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
	dlistint_t *new_node, *temp, *current = *h;
	unsigned int counter = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	while (current->prev)
		current = current->prev;

	temp = current;

	while (current)
	{
		counter++;
		current = current->next;
	}

	if (idx > counter)
		return (NULL);

	current = temp;
	counter = 0;
	new_node->n = n;

	while (current)
	{
		if (counter == idx)
		{
			temp->next = new_node;
			new_node->prev = temp;
			new_node->next = current;
			current->prev = new_node;
			break;
		}
		temp = current;
		current = current->next;
		counter++;
	}

	return (new_node);
}
