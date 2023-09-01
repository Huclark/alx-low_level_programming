#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer to string's variable
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
