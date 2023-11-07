#include "lists.h"

/**
* sum_dlistint - Sums up all the data (n) of a dlistint_t linked list.
* @head: A pointer to the head of the list
* Return: The sum of all the data (n) in the list or 0 if list is empty.
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int result = 0;

	if (!head)
		return (result);

	while (ptr->prev)
		ptr = ptr->prev;

	while (ptr)
	{
		result += ptr->n;
		ptr = ptr->next;
	}

	return (result);
}
