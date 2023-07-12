#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  *str_concat - function that concatenates two strings.
  *@s1: The string to print.
  *@s2: The string to print.
  *
  *Return: char.
  */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j;

	if (s1 == NULL && s2 == NULL)
	{
		return (0);
	}


	p = (char *) malloc(strlen(s1) + strlen(s2));

	if (p == NULL)
	{
		return (0);
	}

	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			p[i] = s1[i];
		}

		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			p[i] = s2[j];
		}
	}

	p[i] = '\0';

	return (p);
}
