#include <stdio.h>

/**
 * main - Prints single digit numbers from 0 to 10
 *
 * Return: 0 if successful
 */
int main(void)
{
	int x;

	for (x = 1 ; x < 10 ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
