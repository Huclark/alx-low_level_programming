#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
/**
 * printf - Prints to standard output
 * Description; This file is created to change the behaviour
 * of the printf function used in the gm program
*/
int printf(const char *format, ...)
{
	char *message = "9 8 10 24 75 - 9\nCongratulations, you win the Jackpot!\n";

	/* Print winning message to standard output */
	write(1, message, strlen(message));

	exit(EXIT_SUCCESS); /* Exit the program immediately */
}
