#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * prints "Fizz" for multiples of 3
 * prints "Buzz" for multiples of 5
 * prints "FizzBuzz" for multiples of 3 and 5
 * Return: 0 if successful
 */

int main(void)
{
	int y;

	for (y = 1 ; y <= 100 ; y++)
	{
		if ((y % 3) == 0 && (y % 5) != 0)
			printf(" Fizz");
		else if ((y % 5) == 0 && (y % 3) != 0)
			printf(" Buzz");
		else if ((y % 3) == 0 && (y % 5) == 0)
			printf(" FizzBuzz");
		else if (y == 1)
			printf("%i", y);
		else
			printf(" %i", y);
	}
	printf("\n");
	return (0);
}
