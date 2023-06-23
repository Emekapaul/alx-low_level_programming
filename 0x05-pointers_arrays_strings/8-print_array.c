#include <stdio.h>
#include "main.h"

/**
  *print_array - function that prints n elements of an array of integers.
  *@a: The integer to print.
  *@n: The integer to print.
  */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}

		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
