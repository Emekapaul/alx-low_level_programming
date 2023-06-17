#include "main.h"

/**
  *more_numbers - function that prints 10 times the
  *numbers, from 0 to 14
  */
void more_numbers(void)
{
	int cnt = 0;
	int num, k;

	while (cnt <= 10)
	{
		num = 0;
		while (num <= 9)
		{
			_putchar(num + '0');
			num++;
		}
		k = 0;
		while (k <= 4)
		{
			_putchar('1');
			_putchar(k + '0');
			k++;
		}
		_putchar('\n');
		cnt++;
	}
}
