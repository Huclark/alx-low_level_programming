#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: A pointer to a string of 0 and 1 chars.
* Return: 1. The converted number or
*	       2. 0 if there is one or more chars in
* the string b that is not 0 or 1.
*	       3. 0 if b is NULL.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int unint_value = 0; /* Converted number */

	int index = 0;

	if (b == NULL) /* Check if we are pointing to NULL string */
		return (0);

	/* Loop string to convert each bit */
	while (b[index] != '\0')
	{
		/* check for non-binary numbers */
		if (b[index] != '0' && b[index] != '1')
			return (0); /* return function immediately */

		/* Convert binary and increment loop index */
		unint_value = (unint_value << 1) | (b[index] - '0');
		index += 1;
	}
	return (unint_value);
}
