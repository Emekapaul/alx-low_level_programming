#include "main.h"

/**
 * print_last_digit - Main entry point.
 * @num: The character to print.
 *
 * Return: Calculated output
 */
int print_last_digit(int num)
{
	int lastDig = num % 10;

	if (lastDig < 0)
	{
		lastDig *= -1;
	}
	_putchar(lastDig + '0');
	return (lastDig);
}
