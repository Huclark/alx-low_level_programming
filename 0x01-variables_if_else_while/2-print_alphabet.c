#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 *
 * Return: is 0 if successful
 */
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
