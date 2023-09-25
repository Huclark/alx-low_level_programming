#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 * @head: Head pointer
*/

void free_listint2(listint_t **head)
{
	/* Declare a node pointer to traverse the list */
	listint_t *node2free;

	if (head == NULL || *head == NULL)
		return; /* Return the function quickly */

	while (*head != NULL)
	{
		node2free = *head;
		*head = (*head)->next;
		free(node2free);
	}
	free(*head);
}
