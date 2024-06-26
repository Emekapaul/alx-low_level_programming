#include "search_algos.h"

/**
 * linear_search - Search for a value in an array of integers
 * @array: the array to search
 * @size: seze of the array
 * @value: the calue to search for
 *
 * Return: the index where the value was first found or -1.
**/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array && size > 0)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	return (-1);
}
