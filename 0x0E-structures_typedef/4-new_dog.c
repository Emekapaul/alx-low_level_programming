#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	dog_t *newDog;

	int l1, l2;

	l1 = strlen(name);
	l2 = strlen(owner);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = malloc(sizeof(char) * (l1 + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (l2 + 1));
	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}

	strcpy(newDog->name, name);
	strcpy(newDog->name, owner);

	newDog->age = age;

	return (newDog);
}
