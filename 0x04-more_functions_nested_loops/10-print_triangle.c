#include "main.h"

/**
  *print_triangle - function that prints a triangle.
  *@size: The integer to print.
  */
void print_triangle(int size)
{
	int i = 1, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				if ((i + j) <= size)
				{
					_putchar(' ');
					j++;
				}

				else
				{
					_putchar('#');
					j++;
				}
			}
		_putchar('\n');
		i++;
		}
	}
}
