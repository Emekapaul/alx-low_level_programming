#include <stdio.h>
#include "lists.h"

/**
  * print_list - Write a function that prints all the elements of a
  * list_t list.
  * @h: Head point
  *
  * Return: The number of node, if str is NULL, print [0] (nil).
  */
size_t print_list(const list_t *h)
{
	size_t no_nodes = 0;
	const list_t *ptr = NULL;

	if (!h)
	{
		return (0);
	}

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%lu] %s\n", (unsigned long)ptr->len, ptr->str);
		}

		else
		{
			printf("[0] (nil)\n");
		}
		no_nodes++;
		ptr = ptr->next;
	}

	return (no_nodes);
}
