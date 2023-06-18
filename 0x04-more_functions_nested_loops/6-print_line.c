#include "main.h"

/**
  *print_line - function that draws a straight
  *line in the terminal.
  *@n: The integer to print.
  */
void print_line(int n)
{
	int i = 1;

	if (n)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
