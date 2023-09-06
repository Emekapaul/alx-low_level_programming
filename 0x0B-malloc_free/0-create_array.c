#include "main.h"
#include <stdlib.h>

/**
  *create_array - Write a function that creates an array of chars, and
  *initializes it with a specific char.
  *@size: The size of the integer.
  *@c: The character to print.
  *
  *Return: NULL if size = 0. Returns a pointer to the array, or NULL if
  *it fails.
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
