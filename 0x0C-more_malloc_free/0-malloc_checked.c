#include "main.h"
#include <stdlib.h>

/**
  *malloc_checked - Write a function that allocates memory using malloc.
  *@b: The size of malloc.
  *Return: pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return ((void *)ptr);
}
