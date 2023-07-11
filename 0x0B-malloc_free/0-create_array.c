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

	p = (char *) malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			if (size == 0)
			{
				return (NULL);
			}

			else
			{
				*(p + i) = c;
			}
		}
	}

	return (p);
}
