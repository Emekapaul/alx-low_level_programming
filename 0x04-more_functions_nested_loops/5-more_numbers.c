#include "main.h"

/**
  *more_numbers - function that prints 10 times the numbers, from 0 to 14.
  */
void more_numbers(void)
{
	int num1 = 1;
	int num2;

	while (num1 <= 10)
	{
		num2 = 0;
		while (num2 <= 14)
		{
			if (num2 <= 9)
			{
				_putchar(num2 + '0');
				num2++;
			}

			else
			{
				_putchar('1');
				_putchar(num2 % 10 + '0');
				num2++;
			}
		}
		num1++;
		_putchar('\n');
	}
}