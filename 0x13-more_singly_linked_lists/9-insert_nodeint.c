#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position
* @head: A pointer to the head of listint_t linked list
* @idx: Index of the list where the new node should be added
*		 Index starts at 0.
* @n: Integer input
* Return: Address of new node or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_inserted, *node_navigator;
	unsigned int index_counter = 0;

	node_inserted = malloc(sizeof(listint_t));

	if (head == NULL || node_inserted == NULL)
		return (NULL);

	node_inserted->n = n;

	if (idx == 0)
	{
		node_inserted->next = *head;
		*head = node_inserted;
		return (node_inserted);
	}

	node_navigator = *head;

	while (node_navigator != NULL)
	{
		if (index_counter == idx - 1)
		{
			node_inserted->next = node_navigator->next;
			node_navigator->next = node_inserted;
			return (node_inserted);
		}
		else
		{
			node_navigator = node_navigator->next;
			index_counter += 1;
		}
	}
	return (NULL);
}
