#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int a, x;

	for (a = 1 ; a <= 10 ; a++)
	{
		for (x = 0 ; x < 15 ; x++)
		{
			if (x >= 10)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
