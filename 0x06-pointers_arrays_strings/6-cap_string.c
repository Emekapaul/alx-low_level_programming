#include "main.h"

/**
  *cap_string - function that capitalizes all words of a string.
  *@s: The string to print.
  *Return: char.
  */
char *cap_string(char *s)
{
	int i;
	int cap = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			cap = 1;

		}

		else if (cap)
		{
			cap = 0;

			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - ('a' - 'A');
			}
		}
	}

	return (s);
}
