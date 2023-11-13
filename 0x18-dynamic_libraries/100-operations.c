#include "operations.h"

/**
 * add - Adds two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/
int add(int a, int b)
{
	return (a + b);
}


/**
 * sub - Subtracts two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/
int sub(int a, int b)
{
	return (a - b);
}


/**
 * div - Divides two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	fprintf(stderr, "%d / %d: Division by zero\n", a, b);
	return (0);
}


/**
 * mul - Multiplies two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/
int mul(int a, int b)
{
	return (a * b);
}


/**
 * mod - Modulo of two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	fprintf(stderr, "%d %% %d: Modulo by zero\n", a, b);
	return (0);
}
