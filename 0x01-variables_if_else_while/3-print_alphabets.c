#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercas and then in uppercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	char x;
	char y;

	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x);
	for (y = 'A' ; y <= 'Z' ; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
