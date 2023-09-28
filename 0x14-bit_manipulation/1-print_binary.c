#include "main.h"

/**
* print_binary - Prints the binary representation of a number
* @n: Number to convert to binary
*/

void print_binary(unsigned long int n)
{
	int bit_count, start_print = 0;

	unsigned long int entry_point;

	bit_count = sizeof(unsigned long int) * 8;

	entry_point = 1UL << (bit_count - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (entry_point > 0)
	{
		if (n & entry_point || start_print)
		{
			if (n & entry_point)
				_putchar('1');
			else
				_putchar('0');
			start_print = 1;
		}

		entry_point >>= 1;
	}
}
