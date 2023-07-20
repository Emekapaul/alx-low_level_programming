#include "function_pointers.h"

/**
  *int_index - function that searches for an integer.
  *@array: The array to print.
  *@size: is the number of elements in the array.
  *@cmp: Function pointer.
  *
  *Return: returns the index of the first element for which
  *the cmp function does not return 0.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp != 0)
		{
			return (*cmp)(array[size])
		}
	}
	return 0;
}
