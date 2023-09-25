#include "lists.h"

/**
* sum_listint - Returns the sum of all data (n) of a listint_t linked list
* @head: A pointer to the head of listint_t linked list
* Return: sum of all data or 0 if list is empty
*/

int sum_listint(listint_t *head)
{
	listint_t *current_node = head;
	int cumulative_sum = 0;

	if (head == NULL)
		return (0);

	while (current_node != NULL)
	{
		/* loop through to sum all numbers */
		cumulative_sum += current_node->n;
		current_node = current_node->next;
	}
	return (cumulative_sum);
}
