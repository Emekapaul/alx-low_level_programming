#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  *string_nconcat - function that concatenates two strings.
  *@s1: First string to concatenate
  *@s2: Second string to concatenate
  *@n: size of string
  *Return: char
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, j;
	unsigned int k;
	unsigned int nlen = (n >= strlen(s2)) ? strlen(s2) : n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	p = (char *) malloc(strlen(s1) + nlen + 1);
	if (p == NULL)
	{
		return (0);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	if (n >= strlen(s2))
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			p[i] = s2[j];
		}
	}
	else
	{
		for (k = 0; k < n; k++, i++)
		{
			p[i] = s2[k];
		}
	}
	p[i] = '\0';
	return (p);
}
