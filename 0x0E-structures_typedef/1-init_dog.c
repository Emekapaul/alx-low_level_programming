#include "dog.h"

/**
  * init_dog - Write a function that initialize a variable of type struct
  * dog
  * @d: The struct name.
  * @name: Name of dog.
  * @age: Age of dog.
  * @owner: Dog owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return (1);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
