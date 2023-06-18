#include "main.h"

/**
  *print_diagonal - function that draws a diagonal
  *line on the terminal.
  *@n: The character to be printed.
  */
void print_diagonal(int n)
{
	int i = 1, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n)
	{
		while (i <= n)
		{
			j = 1;
			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
		_putchar('\\');
		_putchar('\n');
		i++;
		}
	}
}
