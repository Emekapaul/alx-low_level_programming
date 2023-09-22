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
	int count = 0;
	const list_t *ptr = NULL;

	ptr = h;

	for (; ptr != NULL; count++)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}


		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}

		ptr = ptr->next;
	}

	return (count);
}
