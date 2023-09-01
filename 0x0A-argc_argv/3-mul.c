#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int a = 0, b = 0, c = 0, slen = 0, d = 0, num = 0;

	while (s[slen] != '\0')
		slen++;

	while (a < slen && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 is Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int times, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	times = a * b;

	printf("%d\n", times);

	return (0);
}
