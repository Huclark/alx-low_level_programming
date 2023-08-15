#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 * Return: 0 if succesful
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
