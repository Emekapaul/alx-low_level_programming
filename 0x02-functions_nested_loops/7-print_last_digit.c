#include "main.h"

/**
  *print_last_digit - function that prints the last digit of a number.
  *@num: The integer to print
  *
  *Return: Return an int
  */
int print_last_digit(int num)
{
	int result = num % 10;

	if (result < 0)
	{
		result = -result;
	}

	_putchar(result + '0');
	return (result);
}
