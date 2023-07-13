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

	p[0] = (int *) malloc(width * height * sizeof(int));

	if (p[0] == NULL)
	{
		free(p);
		return (0);
	}

	for (i = 1; i < width; i++)
	{
		 p[i] = p[0] + i * height;
	}

	for (i = 0; i < width; i++)
    	{
        	for (j = 0; j < height; j++)
        	{
            		*(*(p + i) + j) = 0;
        	}
	}

	return (p);
}
