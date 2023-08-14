#ifndef _DOG_
#define _DOG_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - The dog's info
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
