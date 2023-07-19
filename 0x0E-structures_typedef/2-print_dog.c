#include <stdio.h>
#include "dog.h"

/**
  *print_dog - function that prints a struct dog.
  *@d: POinter to the struct.
  */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("(nil)");
	}

	if (d->owner == NULL)
	{
		printf("(nil)");
	}

	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
