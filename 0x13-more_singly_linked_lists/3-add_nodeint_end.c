#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Head pointer
 * @n: Integer input
 * Return: Address of the new element or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	*head = new_node;
	while (new_node != NULL)
	{
		new_node = new_node->next;
	}
	new_node->next = NULL;
	return (new_node);
}