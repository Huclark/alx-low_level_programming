#include <stdlib.h>
#include "main.h"

/**
 * counter - counts the number of words in a string
 * @z: string input
 * Return: number of words
 */

int counter(char *z)
{
	int m, n, o;

	m = 0;
	o = 0;

	for (n = 0; z[n] != '\0'; n++)
	{
		if (z[n] == ' ')
			m = 0;
		else if (m == 0)
		{
			m = 1;
			o++;
		}
	}

	return (o);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings or NULL if otherwise
 */

char **strtow(char *str)
{
	char **mat, *temp;
	int p, q = 0, slen = 0, words, r = 0, begin, end;

	while (*(str + slen))
		slen++;
	words = counter(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (p = 0; p <= slen; p++)
	{
		if (str[p] == ' ' || str[p] == '\0')
		{
			if (r)
			{
				end = p;
				temp = (char *) malloc(sizeof(char) * (r + 1));
				if (temp == NULL)
					return (NULL);
				while (begin < end)
					*temp++ = str[begin++];
				*temp = '\0';
				mat[q] = temp - r;
				q++;
				r = 0;
			}
		}
		else if (r++ == 0)
			begin = p;
	}

	mat[q] = NULL;

	return (mat);
}
