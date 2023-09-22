#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_str;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_str = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new_str->str = strdup(str);
	new_str->len = len;
	new_str->next = (*head);
	(*head) = new_str;

	return (*head);
}
