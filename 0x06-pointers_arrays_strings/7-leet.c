#include "main.h"

/**
  *leet - function that encodes a string into 1337.
  *@s: The string to print.
  *
  *Return: char
  */
char *leet(char *s)
{
	int l = 0, l2;
	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";

	while (s[l] != '\0')
	{
		l2 = 0;
		while (l2 < 10)
		{
			if (s[l] == s1[l2])
			{
				s[l] = s2[l2];
			}
			l2++;
		}
	l++;
	}

	return (s);
}
