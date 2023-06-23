#include "main.h"

/**
  *puts_half - function that prints half of a string
  *@str: The character to print
  */
void puts_half(char *str)
{
	int length = 0, half, n;

	while (str[length] != '\0')
	{
		length++;
	}

	half = (length - 1) / 2;
	n = (length - 1) / 2;

	if (half % 2 == 1)
	{
		while (str[half] != '\0')
		{
			if (half == '\0')
			{
				_putchar(str[half]);
				half++;
			}
		half++;
		}
	}

	while (str[half] != '\0')
	{
	
		if (half == n)
		{
			half++;
		}
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
