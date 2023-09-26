#include "lists.h"

/**
 * loop_listint_len - Counts the number of unique node_counter
 *					  in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique node_counter in the list.
 */
size_t loop_listint_len(const listint_t *head)
{
	const listint_t *slow_node_navigator, *fast_node_navigator;
	size_t node_counter = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow_node_navigator = head->next;
	fast_node_navigator = (head->next)->next;

	while (fast_node_navigator)
	{
		if (slow_node_navigator == fast_node_navigator)
		{
			slow_node_navigator = head;
			while (slow_node_navigator != fast_node_navigator)
			{
				node_counter++;
				slow_node_navigator = slow_node_navigator->next;
				fast_node_navigator = fast_node_navigator->next;
			}

			slow_node_navigator = slow_node_navigator->next;
			while (slow_node_navigator != fast_node_navigator)
			{
				node_counter++;
				slow_node_navigator = slow_node_navigator->next;
			}

			return (node_counter);
		}

		slow_node_navigator = slow_node_navigator->next;
		fast_node_navigator = (fast_node_navigator->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_counter, index = 0;

	node_counter = loop_listint_len(head);

	if (node_counter == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			node_counter++;
		}
	}

	else
	{
		while (index < node_counter)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node_counter);
}
