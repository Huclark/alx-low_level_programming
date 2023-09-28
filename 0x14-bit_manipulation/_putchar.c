#include "main.h"

/**
 * _putchar -  replicates putchar function
 * @c: character to print
 * Return: character to print
*/

int _putchar(char c)
{
	char char_to_print = write(1, &c, 1);

	return (char_to_print);
}
