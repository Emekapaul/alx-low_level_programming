#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  *_strdup - function that returns a pointer to a newly allocated space
  *in memory, which contains a copy of the string given as a parameter.
  *@str: The string to print.
  *
  *Return: char
  */
char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == 0)
	{
		return (0);
	}

	p = (char *) malloc(strlen(str));

	if (p == NULL)
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
