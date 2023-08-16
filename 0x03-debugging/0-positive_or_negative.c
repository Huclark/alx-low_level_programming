#include <stdlib.h>
#include <time.h>
/* more headers goes here */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - This program assigns a random number to n
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	return (0);
}
