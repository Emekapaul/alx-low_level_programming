#include "main.h"
#include <stdio.h>

/**
  *reverse_array - function that reverses the content of
  *an array of integers.
  *@a: Array of integer to print.
  *@n: integer to print.
  */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
