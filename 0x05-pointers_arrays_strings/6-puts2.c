#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: pointer to string variable
 */

void puts2(char *str)
{
	int a = 0;
	int x = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		a++;
	}

	x = a - 1;

	for (z = 0 ; z <= x ; z++)
	{
		if (z % 2 == 0)
			_putchar(str[0]);
	}
	_putchar('\n');
}
