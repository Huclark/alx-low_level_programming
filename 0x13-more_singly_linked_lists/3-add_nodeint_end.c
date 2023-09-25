#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Head pointer
 * @n: Integer input
 * Return: Address of the new element or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_1, *node_2;

	node_1 = malloc(sizeof(listint_t));

	if (node_1 == NULL)
		return (NULL);

	node_1->n = n;

	if (*head == NULL)
		*head = node_1;

	else
	{
	node_2 = *head;
	while (node_2->next != NULL)
	{
		node_2 = node_2->next;
	}
	node_2->next = node_1;
	}
	node_1->next = NULL;
	return (node_1);
}
