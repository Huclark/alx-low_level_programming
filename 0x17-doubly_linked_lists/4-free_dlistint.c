#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to head of dlistint_t list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current;

	if (!head)
		return;

	current = head;

	while (current->prev)
		current = current->prev;

	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
