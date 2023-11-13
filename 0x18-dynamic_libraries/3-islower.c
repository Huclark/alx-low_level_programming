#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: is the variable name of the letter to be checked
 * Return: 1 if lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
