#include "main.h"

/**
  * _isupper - Function that checks for uppercase character.
  * @c: The character to print
  *
  * Return: On success return 1
  * On error, return 0.
  */

int _isupper(int c)
{
	int one = 1;
	int zero = 0;

	if (c >= 'A' && c <= 'Z')
	{
		return (one);
	}

	else
	{
		return (zero);
	}
}
