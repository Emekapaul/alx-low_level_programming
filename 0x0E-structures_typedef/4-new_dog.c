#include "dog.h"
#include <stdlib.h>

/**
  * *new_dog - Write a function that creates a new dog.
  * @name: Dog name.
  * @age: Dog age.
  * @owner: Dog owner.
  *
  *Return: Pointer to struct.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return (newDog);
}
