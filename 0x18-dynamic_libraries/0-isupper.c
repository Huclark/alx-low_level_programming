#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: is input character
 * Return: 1 if uppercase
 * 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
