#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *_strdup - Write a function that returns a pointer to a newly allocated
  *space in memory, which contains a copy of the string given as a
  *parameter.
  *@str: THe string to copy _strdup.
  *
  *Return: On success, the _strdup function returns a pointer to the
  *duplicated string. It returns NULL if insufficient memory was available.
  *Returns NULL if str = NULL.
  */
char *_strdup(char *str)
{
	int i;
	int len;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = (char *)malloc(strlen(str) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0, len = strlen(str); i < len; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
