#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  *print_list - function that prints all the elements of a list_t list.
  *@h: head pointer.
  *Return: unsigned int.
  */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}

		h = h->next;
	}

	return (cnt);
}
