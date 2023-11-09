#include "lists.h"

/**
* get_dnodeint_at_index- Finds the nth node of a dlistint_t linked list
* @head: A pointer to the head of dlistint_t linked list
* @index: Index of node to find (starting from 0)
* Return: The node to find or NULL if it does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int counter = 0;

	if (!head)
		return (NULL);

	while (ptr->prev)
		ptr = ptr->prev;

	while (ptr)
	{
		if (counter == index)
			return (ptr);

		ptr = ptr->next;
		counter++;
	}

	return (NULL);
}
