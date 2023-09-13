#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function to be used to compare values
 * Return: returns value of n otherwise return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (n < size)
	{
		if (cmp(array[n]))
			return (n);
		n++;
	}
	return (-1);
}
