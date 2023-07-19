#include <stdlib.h>
#include "dog.h"

/**
  *free_dog - function that frees dogs.
  *@d: The struct to free.
  */
void free_dog(dog_t *d)
{
	free(d);
}
