#include "main.h"

/**
  *_strlen - function that returns the length of a string.
  *@s: Espects an address
  *
  *Return: return lenght of string
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\0')
		{
			return (i);
		}
	}

	return (i);
}
