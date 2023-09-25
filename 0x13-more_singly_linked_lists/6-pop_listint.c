#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *				and returns the head node's data (n).
 * @head: A pointer to the head of the linked list.
 * Return: The data from the deleted node or 0 if the linked list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *extract_data;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	extract_data = *head;
	data = extract_data->n;

	*head = (*head)->next;

	free(extract_data);

	return (data);
}
