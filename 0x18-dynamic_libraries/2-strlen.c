#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string character(s)
 * Return: stringLength (which is the actual string's length)
 */

int _strlen(char *s)
{
	int stringLength = 0;

	while (*s++ != '\0')
		stringLength++;
	return (stringLength);
}
