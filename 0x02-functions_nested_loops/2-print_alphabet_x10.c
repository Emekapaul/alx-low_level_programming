#include "main.h"

/**
  *print_alphabet_x10 - function that prints 10 times the alphabet,
  *in lowercase.
  */
void print_alphabet_x10(void)
{
	int cl;
	char lc;

	for (cl = 1; cl <= 10; cl++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			_putchar(lc);
		}
	_putchar('\n');
	}
}
