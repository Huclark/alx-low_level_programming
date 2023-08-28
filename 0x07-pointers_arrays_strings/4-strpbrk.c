#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string referenced
 * Return: a pointer to s if there's match or NULL if otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
