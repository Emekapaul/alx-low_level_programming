#include "lists.h"

/**
  * list_len - Write a function that returns the number of elements in a
  * linked list_t list.
  * @h: Header to the first element
  * Return: size_t.
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	const list_t *ptr = NULL;

	ptr = h;

	for (; ptr != NULL; count++)
	{
		ptr = ptr->next;
	}

	return (count);
}
