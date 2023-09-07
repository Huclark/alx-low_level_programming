#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, slen1 = 0, slen2 = 0;

	while (s1 && s1[slen1])
		slen1++;
	while (s2 && s2[slen2])
		slen2++;

	if (n < slen2)
		s = malloc(sizeof(char) * (slen1 + n + 1));
	else
		s = malloc(sizeof(char) * (slen1 + slen2 + 1));

	if (!s)
		return (NULL);

	while (i < slen1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < slen2 && i < (slen1 + n))
		s[i++] = s2[j++];

	while (n >= slen2 && i < (slen1 + slen2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
