#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The character to print
 *
 * Return: On success 1 and +.
 * On error, -1 and -
 */
int print_sign(int n)
{
	int one = 1;
	int zero = 0;
	int negOne = -1;

	if (n > 0)
	{
		_putchar('+');
		return (one);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (zero);
	}

	else
	{
		_putchar('-');
		return (negOne);
	}
}
