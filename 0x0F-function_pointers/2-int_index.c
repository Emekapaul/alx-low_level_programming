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

	if ((*cmp) == NULL || array == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
