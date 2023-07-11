#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *create_array - function that creates an array of chars,
  *and initializes it with a specific char.
  *@size: Size of memory to allocate.
  *@c: The character to print.
  *
  *Return: char.
  */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}

	p = (char *) malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (0);
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			*(p + i) = c;
		}
	}

	return (p);
}
