#include "main.h"

/**
  *_strpbrk - function that searches a string for any of a set of bytes.
  *@s: The string to print.
  *@accept: The string to scan.
  *
  *Return: char.
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		j++;
		}
	i++;
	}

	return (0);
}
