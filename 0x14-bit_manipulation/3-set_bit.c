#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: A pointer to an unsigned integer
 * @index: Index to set value to 1
 * Return: 1 if it worked
 *		  -1 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is >= number of bits in unsigned long int */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* We return -1 because index is out of range */

	*n |= (1UL << index);

	/* 1UL is 00000000000000000000000000000001 in binary */
	/*Left shift 1UL by the given index to set just */
	/* at the specified bit position */

	return (1);
}
