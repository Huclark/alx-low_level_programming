#include <stdio.h>

/**
 * main - Prints the size of various types on the computer
 *
 * Return: Must be 0 if successful
 */
int main(void)
{
	char c;
	int i;
	long int x;
	long long int y;
	float f;
printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(x));
printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(y));
printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));
return (0);
}
