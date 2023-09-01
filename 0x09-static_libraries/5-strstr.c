#include "main.h"

/**
 * _strstr - locates a substring excluding '\0'
 * @haystack: string to be searched
 * @needle: substring
 * Return: pointer to needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
