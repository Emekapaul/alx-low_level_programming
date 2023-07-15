#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *_calloc - function that allocates memory for an array, using malloc.
  *@nmemb: Array elements.
  *@size: Size of each array.
  *Return: void.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	ptr = (char *)p;

	for (i = 0; i < nmemb; i++)
	{
		ptr[i * size] = 0;
	}

	return (p);
}
