#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: A pointer to a pointer which points to the head of listint_t linked list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t list_length = 0;
	int node_cmp;
	listint_t *temp_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		node_cmp = *h - (*h)->next;
		if (node_cmp > 0)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
			list_length += 1;
		}
		else
		{
			free(*h);
			*h = NULL;
			list_length += 1;
			break;
		}
	}

	*h = NULL;

	return (list_length);
}
