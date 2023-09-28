#include "main.h"

/**
* flip_bits - returns the number of bits you would need to
*             flip to get from one number to another.
* @n: The first unsigned long integer.
* @m: The second unsigned long integer.
* Return: The number of bits needed to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_bit;
	unsigned int bit_count = 0;

	flip_bit = n ^ m;

	while (flip_bit > 0)
	{
		if (flip_bit & 1)
			bit_count++;
		flip_bit >>= 1;
	}

	return (bit_count);
}
