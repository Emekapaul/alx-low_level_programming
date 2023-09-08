#include <stdlib.h>
#include "main.h"

/**
 **array_range - Write a function that creates an array of integers.
 *@min: minimum range of values stored
 *@max: maximum range of values stored and number of elements
 *
 *Return: the pointer to the newly created array, f min > max, return NULL
 *If malloc fails, return NULL
 *
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}

	return (p);
}
