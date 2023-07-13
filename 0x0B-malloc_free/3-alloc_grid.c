#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *alloc_grid - function that returns a pointer to a 2
  *dimensional array of integers.
  *@width: The integer to print.
  *@height: The integer to print.
  *
  *Return: int
  */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width == 0 || height == 0)
	{
		return (0);
	}

	p = (int **) malloc(width * sizeof(int *));

	if (p == NULL)
	{
		return (0);
	}

	for (i = 0; i < width; i++)
	{
		p[i] = (int *) malloc(height * sizeof(int));

		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
		free(p);
		return (0);
		}

		for (j = 0; j < height; j++)
		{
			*(*(p + i) + j) = 0;
		}
	}

	return (p);
}
