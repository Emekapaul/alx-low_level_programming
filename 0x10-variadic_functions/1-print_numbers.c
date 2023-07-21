#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_numbers - function that prints numbers, followed by a new line.
  *@separator: the string to be printed between numbers.
  *@n:the number of integers passed to the function.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}

		printf("%d", va_arg(p, unsigned int));
	}

	va_end(p);

	printf("\n");
}
