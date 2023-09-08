#include "main.h"
#include <stdlib.h>

/**
  **_calloc - Write a function that allocates memory for an array, using
  *malloc.
  *@nmemb: nmemb
  *@size: size of array.
  *
  *Return: If malloc fails, then _calloc returns NULL
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}

	_memset(p, 0, nmemb * size);

	return (p);
}

/**
 *_memset - This wil fill memory with a constant byte
 *@s: THis will be the memory area to be filled
 *@b: the character to copy
 *@n: This will be the number of times to copy b
 *
 *Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

