#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the structure.
 * @d: Pointer to a dog_t structure.
 */
void free_dog(dog_t *d)
{
	/*Frees the structure*/
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
