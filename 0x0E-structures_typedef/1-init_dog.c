#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *i, char *name, float age, char *owner)
{
	if (i == NULL)
		i = malloc(sizeof(struct dog));
	i->name = name;
	i->age = age;
	i->owner = owner;
}
