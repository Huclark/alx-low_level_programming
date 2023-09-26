#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list
*					   Exits with status 98 if it fails
* @head: A pointer to the head of the listint_t linked list
* Return: The number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_node_navigator = head;
	const listint_t *fast_node_navigator = head;
	size_t node_counter = 0;

	/* If function fails, exit with status 98 */
	if (head == NULL)
	{
		printf("98\n");
		exit(98);
	}

	while (slow_node_navigator != NULL && fast_node_navigator != NULL
	&& fast_node_navigator->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow_node_navigator, slow_node_navigator->n);

		/* Move the slower node by one step */
		slow_node_navigator = slow_node_navigator->next;

		/* Move the faster node by two steps */
		fast_node_navigator = fast_node_navigator->next->next;

		node_counter += 1;

		/* Check for a cycle and exit loop if cycle is detected */
		if (slow_node_navigator == fast_node_navigator)
		{
			printf("-> [%p] %d\n", (void *)slow_node_navigator, slow_node_navigator->n);
			break;
		}
	}

	printf("Number of nodes in the list: %lu\n", (unsigned long)node_counter);

	return (node_counter);
}
