#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Write a function that frees dogs.
 * @d: This is the struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}


