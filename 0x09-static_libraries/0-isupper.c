#include "main.h"

/**
  *_isupper - function that checks for uppercase character.
  *@c: The integer to print.
  *
  *Return: 1 if c is uppercase
  *Returns 0 otherwise
  */
int _isupper(int c)
{

	if (c <= 90 && c >= 65)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
