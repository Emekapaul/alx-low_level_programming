#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
  **string_nconcat - Write a function that concatenates two strings.
  *@s1: First string.
  *@s2: Second string.
  *@n: Size to allocate
  *
  *Return: pointer, If the function fails, it should return NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, fir_str, sec_str;
	unsigned int m;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr = malloc(sizeof(*ptr) * (_strlen(s1) + _strlen(s2) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0, fir_str = _strlen(s1); i < fir_str; i++)
	{
		ptr[i] = s1[i];
	}

	if (n >= (unsigned int)_strlen(s2))
	{
		for (j = 0, sec_str = _strlen(s2); j < sec_str; j++, i++)
		{
			ptr[i] = s2[j];
		}
	}

	else
	{
		for (m = 0; m < n; m++, i++)
		{
			ptr[i] = s2[m];
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
