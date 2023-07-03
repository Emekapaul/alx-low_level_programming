#include "main.h"

/**
  *char *_memset(char *s, char b, unsigned int n)
  *@s: pointer
  *@b: The value the print
  *@n: The number of times to print n
  *
  *Return: char
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
