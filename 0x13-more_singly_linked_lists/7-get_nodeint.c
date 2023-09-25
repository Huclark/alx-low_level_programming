#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: A pointer to the head of listint_t linked list
 * @index: The index of the node returned by function
 * Return: NULL if node does not exit or the nth node of listint_t linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *target_node;
	unsigned int current_index = 0;

	if (head == NULL)
		return (NULL);
	target_node = head;
	while (target_node != NULL)
	{
		if (current_index == index)
			return (target_node);

		target_node = target_node->next;
		current_index++;
	}
	return (NULL); /* This means the target node does not exist */
}
