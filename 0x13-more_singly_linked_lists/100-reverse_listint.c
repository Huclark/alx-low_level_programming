#include"lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head:  A pointer to a pointer which points to the
 *		   head of listint_t linked list
 * Return: A pointer to the 1st node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_navigator, *next_node, *previous_node;

	previous_node = NULL;
	node_navigator = *head;

	while (node_navigator != NULL)
	{
		/* Capture and retrieve the next node */
		next_node = node_navigator->next;
		/* Reverse the link */
		node_navigator->next = previous_node;
		/* Update the previous node to the */
		previous_node = node_navigator;
		/* Set the node navigator to the next node to traverse */
		node_navigator = next_node;
	}

	/* Update the of the list to the 1st node (which used to be the last node) */
	*head = previous_node;

	return (previous_node);
}
