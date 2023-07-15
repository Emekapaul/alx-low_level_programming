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
	unsigned int i, j;
	unsigned int k;
	unsigned int s1_len = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int s2_len = (s2 != NULL) ? strlen(s2) : 0;
	unsigned int nlen = (n >= s2_len) ? s2_len : n;

	p = (char *) malloc(s1_len + nlen + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		p[i] = s1[i];
	}

	if (n >= s2_len)
	{
		for (j = 0; j < s2_len; j++, i++)
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
