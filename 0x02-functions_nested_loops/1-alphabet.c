#include "main.h"

/**
 * print_alphabet - check the code
 *
 * description - Print small letter from a - z
 */
void print_alphabet(void)
{
	char sl = 'a';

	while (sl <= 'z')
	{
		_putchar(sl);
		sl++;
	}
	_putchar('\n');
}
