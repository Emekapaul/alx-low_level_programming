#include "dog.h"
#include <stdio.h>
#include "stdlib.h"

/**
  * print_dog - Write a function that prints a struct dog
  * @d: The pointer to the struct
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}

	if (d->name == NULL)
	{
		printf("(nil)");
	}

	if (d->owner == NULL)
	{
		printf("(nil)");
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
