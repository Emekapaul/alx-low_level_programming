#include "main.h"

/**
  *_pow_recursion - function that returns the value of x
  *raised to the power of y.
  *@x: The integer to print.
  *@y: The integer to print.
  *
  *Return: int
  */
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	res = x * _pow_recursion(x, y - 1);

	return (res);
}
