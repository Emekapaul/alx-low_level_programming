#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *array_range -  function that creates an array of integers.
  *@min: The values to print.
  *@max: The values to print.
  *Return: int.
  */
int *array_range(int min, int max)
{
	int i, j;
	int *p;

	if (min > max)
	{
		return (0);
	}

	p = (int *) malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
	{
		return (0);
	}
	
	for (i = 0; i < min; i++)
	{
		p[i] = min;
	}

	for (j = 0; j <= max; j++, i++)
	{
		p[i] = max;
	}

	return (p);
}
