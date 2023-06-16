#include <stdio.h>
#include "main.h"

/**
  *print_to_98 - function that prints all natural
  *numbers from n to 98.
  *@n: The integer to print.
  */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}

	else if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
		printf("\n");
	}

	else if (n >= 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n--;
		}
		printf("\n");
	}
}
