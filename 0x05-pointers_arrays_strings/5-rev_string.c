#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to strings variable
 */

void rev_string(char *s)
{
	int stringLength = 0;
	char reverse = s[0];
	int x;

	while (s[stringLength] != '\0')
		stringLength++;

	for (x = 0; x < stringLength ; x++)
	{
		stringLength--;
		reverse = s[x];
		s[x] = s[stringLength];
		s[stringLength] = reverse;
	}
}
