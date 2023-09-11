#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *i)
{
	if (i == NULL)
		return;

	if (i->name == NULL)
		i->name = "(nil)";
	if (i->owner == NULL)
		i->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", i->name, i->age, i->owner);
}
