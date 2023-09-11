#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *i, char *name, float age, char *owner);
void print_dog(struct dog *i);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *i);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
