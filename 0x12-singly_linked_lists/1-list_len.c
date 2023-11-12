#include "lists.h"

/**
  * list_len - Write a function that returns the number of elements in a
  * linked list_t list.
  * @h: Head pointer
  *
  * Return: the number of elements in a linked list_t list.
  */
size_t list_len(const list_t *h)
{
	size_t no_nodes = 0;

	const list_t *ptr = NULL;

	if (!h)
		return (0);

	ptr = h;

	while (ptr)
	{
		no_nodes++;
		ptr = ptr->next;
	}

	return (no_nodes);
}
