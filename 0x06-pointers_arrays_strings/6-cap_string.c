#include "main.h"

/**
  *cap_string - function that capitalizes all words of a string.
  *@s: The string to print.
  *Return: char.
  */
char *cap_string(char *s)
{
	int i = 0, cap = 1;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		{
			cap = 1;
		}

		else if (cap)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - ('a' - 'A');
			}
			cap = 0;
		}
		i++;
	}

	return (s);
}
