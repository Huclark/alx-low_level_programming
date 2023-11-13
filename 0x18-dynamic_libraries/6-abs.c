#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: is the integer
 * Return: absolute value
 */

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
