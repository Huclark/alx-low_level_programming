#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;

	if (array == NULL || action == NULL)
		return;

	while (n < size)
	{
		action(array[n]);
		n++;
	}
}
