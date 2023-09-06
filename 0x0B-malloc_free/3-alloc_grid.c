#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - Write a function that returns a pointer to a 2 dimensional
  *array of integers.
  *@width: The width of the array.
  *@height: The height of thr array.
  *
  *Return: int, The function should return NULL on failure, If width or
  *height is 0 or negative, return NULL.
  */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			return (NULL);
		}

	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
