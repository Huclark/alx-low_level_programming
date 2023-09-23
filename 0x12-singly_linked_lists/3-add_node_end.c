#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_add;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_add = malloc(sizeof(list_t));
	if (!new_add)
		return (NULL);

	new_add->str = strdup(str);
	new_add->len = len;
	new_add->next = NULL;

	if (*head == NULL)
	{
		*head = new_add;
		return (new_add);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_add;

	return (new_add);
}
