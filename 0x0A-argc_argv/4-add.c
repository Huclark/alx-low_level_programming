#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: is array str
 * Return: Always 0
 */
int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))

	{
		if (!isdigit(str[i]))
		{
			return (0);
		}

		i++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: counts arguments
 * @argv: is arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])

{
	int i;
	int n;
	int add = 0;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))

		{
			n = atoi(argv[i]);
			add += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", add);

	return (0);
}
