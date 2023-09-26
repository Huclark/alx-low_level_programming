#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at a specified index
*							 of a listint_t linked list.
* @head: A pointer to a pointer to the head of listint_t linked list.
* @index: The specified index which corresponds to the node to delete.
* Return: 1 if function succeeds
*		  -1 if function fails
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int index_tracker = 0;

	listint_t *node_navigator, *previous_node;

	if (*head == NULL || head == NULL)
		return (-1);

	node_navigator = *head;

	if (index == 0)
	{
		*head = node_navigator->next;
		free(node_navigator);
		return (1);
	}

	while (node_navigator != NULL)
	{
		if (index_tracker == index - 1)
		{
			previous_node = node_navigator->next;
			if (previous_node == NULL)
				return (-1);
			node_navigator->next = previous_node->next;
			free(previous_node);
			return (1);
		}
		else
		{
			node_navigator = node_navigator->next;
			index_tracker += 1;
		}
	}
	return (-1);
}
