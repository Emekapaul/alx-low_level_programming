#include "main.h"

/**
  *leet - function that encodes a string into 1337.
  *@s: The string to print.
  *
  *Return: char
  */
char *leet(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		if ((s[l] >= 'a' && s[l] <= 'z') || (s[l] >= 'A' && s[l] <= 'Z'))
		{
			if (s[l] == 'a' || s[l] == 'A')
			{
				s[l] = '4';
			}

			else if (s[l] == 'e' || s[l] == 'E')
			{
				s[l] = '3';
			}

			else if (s[l] == 'o' || s[l] == 'O')
			{
				s[l] = '0';
			}

			else if (s[l] == 't' || s[l] == 'T')
			{
				s[l] = '7';
			}

			else if (s[l] == 'o' || s[l] == 'L')
			{
				s[l] = '1';
			}
		}
		l++;
	}

	return (s);
}
