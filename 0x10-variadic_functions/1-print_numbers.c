#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Write a function that prints numbers, followed by
 * a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int res;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		res = va_arg(args, int);
		printf("%d", res);

		if (i == (n - 1))
		{
			printf("\n");
		}
		else if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
}
