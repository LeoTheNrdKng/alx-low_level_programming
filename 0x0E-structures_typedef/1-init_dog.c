#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: struct pointer.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*The structure dog have a name, age, owner elements*/

	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
