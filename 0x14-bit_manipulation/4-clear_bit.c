#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: A pointer to the number where the bit should be cleared.
* @index: The index of the bit to clear (starting from 0).
* Return: 1 if it worked
*         or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int entry_point;
	unsigned int bit_count;

	bit_count = sizeof(unsigned long int) * 8;


	if (index >= bit_count)
		return (-1);

	entry_point = 1UL << index;
	*n &= ~entry_point;

	return (1);
}
