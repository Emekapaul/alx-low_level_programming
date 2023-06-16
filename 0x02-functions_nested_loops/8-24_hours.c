#include "main.h"

/**
  *jack_bauer - function that prints every minute of
  *the day of Jack Bauer, starting from 00:00 to 23:59.
  */
void jack_bauer(void)
{
	int ft = 0;
	int st;

	while (ft <= 23)
	{
		st = 0;
		while (st <= 59)
		{
			_putchar(ft / 10 + '0');
			_putchar(ft % 10 + '0');
			_putchar(':');
			_putchar(st / 10 + '0');
			_putchar(st % 10 + '0');
			_putchar('\n');
			st++;
		}
	ft++;
	}
}
