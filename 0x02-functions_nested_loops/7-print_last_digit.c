#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: is the integer
 * Return: value of 'a' if successful
 */

int print_last_digit(int x)
{
	int a;

	a = x % 10;
	if (x < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
