#include "main.h"

/**
  *_atoi - function that convert a string to an integer.
  *@s: The character to print.
  *
  *Return: int
  */
int _atoi(char *s)
{
	int len = 0;
	int res;

	while (s[len] != '\0')
	{
		res = s[len];
		len++;
	}

	return res;
}
