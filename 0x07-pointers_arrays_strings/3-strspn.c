#include "main.h"

/**
  *strspn - function that gets the length of a prefix substring.
  *@s: The string to print.
  *@accept: Parameter.
  *
  *Return: unsigned.
  */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
		j++;
		}

		if (accept[j] == '\0')
		{
			break;
		}
	i++;
	}

	return (i);
}
