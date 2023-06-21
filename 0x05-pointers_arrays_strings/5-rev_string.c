#include "main.h"

/**
  *rev_string - Write a function that reverses a string.
  *@s: The string to reverse.
  */
void rev_string(char *s)
{
	int i = 0, n = 0, j;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	while (n < j)
	{
		temp = s[n];
		s[n] = s[j];
		s[j] = temp;
		n++;
		j--;
	}
}
