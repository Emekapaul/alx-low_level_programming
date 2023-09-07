#include <stdlib.h>
#include "main.h"

/**
 *_realloc - Write a function that reallocates a memory block using
 *malloc and free
 *@ptr: This is the pointer to memory previsouly allocated by malloc
 *@old_size: This is the size of the allocated memory for ptr
 * @new_size: The new size of new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_one, *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr_one = malloc(new_size);
	if (!ptr_one)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
	ptr_one[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr_one[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr_one);
}
