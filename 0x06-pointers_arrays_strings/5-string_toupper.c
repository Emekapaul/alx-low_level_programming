#include "main.h"

/**
  *string_toupper - function that changes all lowercase
  *letters of a string to uppercase.
  *@s: The string to print.
  */
char *string_toupper(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		if (s[l] <= 'z' && s[l] >= 'a')
		{
			s[l] = s[l] - ('a' - 'A');
		}
	l++;
	}

	return (s);
}
