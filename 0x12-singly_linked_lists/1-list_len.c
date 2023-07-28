#include <stdio.h>
#include "lists.h"

/**
  *list_len - function that returns the number of elements in a
  *linked list_t list.
  *@h: Pointer to the linked list
  *Return: Unsigned int.
  */
size_t list_len(const list_t *h)
{
	size_t num_ele = 0;

	while (h != NULL)
	{
		num_ele++;
		h = h->next;
	}

	return (num_ele);
}
