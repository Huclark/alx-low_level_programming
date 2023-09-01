#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: prefix substring to match
 * Return: number of bytes matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		char *a = accept;
		int n = 0;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				n = 1;
				break;
			}
			a++;
		}
		if (n == 0)
			break;
		i++;
		s++;
	}
	return (i);
}
