#include "main.h"

/**
  *_islower - function that checks for lowercase character.
  *@c: The character to print.
  *
  *Return: Returns 1 if c is lowercase. else,
  *Returns 0 otherwise.
  */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}

	else
	{
		return (0);
	}
	_putchar('\n');
}

