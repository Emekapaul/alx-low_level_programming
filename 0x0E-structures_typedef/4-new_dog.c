#include <stdlib.h>
#include "dog.h"

/**
  *new_dog - function that creates a new dog.
  *@name: Name of dog.
  *@age: Age of dog.
  *@owner: Owner of dog.
  *
  *Return: The new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	(*newDog).name = name;
	(*newDog).age = age;
	(*newDog).owner = owner;

	return (newDog);
}
