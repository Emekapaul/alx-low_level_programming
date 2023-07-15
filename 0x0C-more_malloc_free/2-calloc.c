#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @p: memory area to be fill
 * @k: value to copy
 * @n: number of times to copy b
 *
 * Return: char
 */
char *_memset(char *p, char k, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = k;
	}

	return (p);
}

/**
  *_calloc - function that allocates memory for an array, using malloc.
  *@nmemb: Array elements.
  *@size: Size of each array.
  *Return: void.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
