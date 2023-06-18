#include "main.h"

/**
  *print_square - function that prints a square,
  *followed by a new line.
  *@size: The integer to print.
  */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i = 0, j;

		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
