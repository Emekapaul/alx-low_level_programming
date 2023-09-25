#include "lists.h"
#include <stdio.h>

/**
  * print_list - Write a function that prints all the elements of a list_t
  * list.
  * @h: The head to the first list
  *
  *Return: size_t
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
	{
		return (0);
	}

	ptr = h;

	for (; ptr != NULL; count++)
	{
		if (ptr->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
		}


		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}

		ptr = ptr->next;
	}

	return (count);
}
