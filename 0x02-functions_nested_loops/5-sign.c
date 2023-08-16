#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: is the number
 * Return: if n > 0, returns 1 and prints '+'
 * if n = 0, returns 0 and prints 0
 * if n < 0, returns '-1' and prints '-'
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
