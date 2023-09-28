#include "main.h"

/**
* get_endianness - Checks the endianness.
* Return: 0 if big endian, 1 if little endian.
*/
int get_endianness(void)
{
	unsigned int num_stored = 1;
	char *byte_size;
	int endian;

	byte_size = (char *)&num_stored;

	endian = (int)*byte_size;
	return (endian);
}
