#include "main.h"

int helper_sqrt_func(int num, int i);

/**
  *_sqrt_recursion - function that returns the natural square
  *root of a number.
  *@n: The integer to print.
  *
  *Return: int.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper_sqrt_func(n, 0));
}

/**
 * helper_sqrt_func - recurses to find the natural
 * square root of a number
 * @num: number to calculate the sqaure root of
 * @j: iterator
 *
 * Return: the resulting square root
 */
int helper_sqrt_func(int num, int j)
{
	if (j * j > num)
		return (-1);
	if (j * j == num)
		return (j);
	return (helper_sqrt_func(num, j + 1));
}
