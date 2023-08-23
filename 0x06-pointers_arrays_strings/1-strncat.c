#include "main.h"

/**
 * _strncat - concatenates two strings except that;
 * it will use at most n bytes from src and
 * src does not need to be null-terminated;
 * if it contains n or more bytes
 * @dest: string 1
 * @src: string 2
 * @n: src bytes to be used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int a;

	for (a = 0 ; dest[a] != '\0' ; a++)
		dlen++;
	for (a = 0 ; a < n && src[a] != '\0' ; a++)
		dest[dlen + a] = src[a];
	return (dest);
}
