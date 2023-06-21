#include "main.h"

/**
  *swap_int - function that swaps the values of two integers.
  *@a: Expects a memory address.
  *@b: Expects a memory address.
  */
void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
