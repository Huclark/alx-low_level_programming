#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: Number to extract the bit from.
* @index: The index of the bit to retrieve {starting from 0).
* Return: The value of the bit at the specified index.
*         -1 if an error occurred (if index is out of range).
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int entry_point;
	unsigned int bit, bit_count;

	bit_count = sizeof(unsigned long int) * 8;

	if (index >= bit_count)
		return (-1);

	entry_point = 1UL << index;

	if (n & entry_point)
		bit = 1;
	else
		bit = 0;

	return (bit);
}
