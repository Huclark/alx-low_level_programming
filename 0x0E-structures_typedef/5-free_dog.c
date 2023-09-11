#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @i: struct dog to free
 */

void free_dog(dog_t *i)
{
	if (i)
	{
		free(i->name);
		free(i->owner);
		free(i);
	}
}
