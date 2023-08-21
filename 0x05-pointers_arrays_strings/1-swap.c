#include "main.h"

/**
 * swap_int - Swaps the value integers
 * @a: 1st integer
 * @b: 2nd integer
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
