#include "main.h"

int helper_func(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: The number to print
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper_func(n, n - 1));
}

/**
 * helper_func - calculates if a number is prime recursively
 * @num: number to evaluate
 * @j: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int helper_func(int num, int j)
{
	if (j == 1)
		return (1);
	if (num % j == 0 && j > 0)
		return (0);
	return (helper_func(num, j - 1));
}
