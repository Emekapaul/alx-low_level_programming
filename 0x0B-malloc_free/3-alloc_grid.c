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
	int **arr;
	int g, t;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (g = 0; g < height; g++)
	{
		arr[g] = malloc(sizeof(int) * width);

		if (arr[g] == NULL)
		{
			for (; g >= 0; g--)
				free(arr[g]);

			free(arr);
			return (NULL);
		}
	}

	for (g = 0; g < height; g++)
	{
		for (t = 0; t < width; t++)
			*(*(arr + g) + t) = 0;
	}

	return (arr);
}
