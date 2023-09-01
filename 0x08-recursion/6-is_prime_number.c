#include "main.h"

/**
 *_helperfunc - A function that recursively calculates a prime number
 *@number: This is the number that will be evaluated
 *@k: I will serve as an iterator
 *Return: It will return 1 if n is a prime number, else 0 if not
 */
int _helperfunc(int number, int k)
{
	if (k == 1)
		return (1);
	if (number % k == 0 && k > 0)
		return (0);
	return (_helperfunc(number, k - 1));
}

/**
  *is_prime_number - function that returns 1 if the input integer is a prime
  *number, otherwise return 0
  *@n: The integer to print.
  *Return: 1 if input integer is a prime number, otherwise return 0.
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_helperfunc(n, n - 1));
}


