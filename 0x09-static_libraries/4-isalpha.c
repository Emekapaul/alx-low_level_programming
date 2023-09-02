#include "main.h"

/**
  *_isalpha - function that checks for alphabetic character.
  *@c: The character to print.
  *
  *Return: 1 if c is a letter, lowercase or uppercase. else,
  *Returns 0 otherwise.
  */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
