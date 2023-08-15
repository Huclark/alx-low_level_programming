#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is a letter
 * Return: 1 if 'c' is a letter or 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
