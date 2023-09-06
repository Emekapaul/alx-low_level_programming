#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *str_concat - Write a function that concatenates two strings.
  *@s1: Destination string.
  *@s2: Source string.
  *
  *Return: A newly allocated space in memory which contains the contents of
  *s1, followed by the contents of s2.
  */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;
	int fir_strlen;
	int sec_strlen;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0, fir_strlen = strlen(s1); i < fir_strlen; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0, sec_strlen = strlen(s2); j < sec_strlen; j++, i++)
	{
		ptr[i] = s2[j];
	}

	return (ptr);
}
