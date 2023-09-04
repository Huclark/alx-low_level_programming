#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: size of the array
 * @c: char to assign
 * Return: pointer to array or NULL if otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int n;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		a[n] = c;
	return (a);
}
