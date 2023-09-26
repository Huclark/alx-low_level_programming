#include "lists.h"

/**
 * find_listint_loop - finds the loop in a listint_t linked list
 * @head: Pointer to head of the listint_t linked list
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_node_navigator = head;
	listint_t *fast_node_navigator = head;

	if (!head)
		return (NULL);

	while (slow_node_navigator && fast_node_navigator
	&& fast_node_navigator->next)
	{
		fast_node_navigator = fast_node_navigator->next->next;
		slow_node_navigator = slow_node_navigator->next;
		if (fast_node_navigator == slow_node_navigator)
		{
			slow_node_navigator = head;
			while (slow_node_navigator != fast_node_navigator)
			{
				slow_node_navigator = slow_node_navigator->next;
				fast_node_navigator = fast_node_navigator->next;
			}
			return (fast_node_navigator);
		}
	}

	return (NULL);
}