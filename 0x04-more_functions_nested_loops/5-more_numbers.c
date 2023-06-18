#include "main.h"

/**
  *more_numbers - function that prints 10 times the
  *numbers, from 0 to 14
  */
void more_numbers(void)
{
	int cnt = 0;
	int num;

	while (cnt <= 9)
	{
		num = 0;
		while (num <= 14)
		{
			if (num > 9)
			{
				_putchar('1');
				_putchar(num % 10 + '0');
			}
		num++;
		}
		_putchar('\n');
		cnt++;
	}
}
