#include "lists.h"

/**
 * free_listint - Frees a listint_list
 * @head: Head pointer
*/

void free_listint(listint_t *head)
{
	/* Initialize a pointer to the current node */
	listint_t *current_node;

	/* Traverse through the linked list to the NULL */
	while (head != NULL)
	{
		current_node = head; /* Store the current node */
		head = head->next; /* Point head to next to traverse */
		free(current_node); /* Free node to the end of the list*/
	}
}
