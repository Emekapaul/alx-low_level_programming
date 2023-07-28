#include <stdio.h>
#include "lists.h"

/**
  *print_list - function that prints all the elements of a list_t list.
  *@h: head pointer.
  *Return: unsigned int.
  */
size_t print_list(const list_t *h)
{
	int cnt = 0;
	list_t *p = NULL;

	p = h;

	while (p != NULL)
	{
		cnt++;
		if (p->str == NULL)
		{
			printf("0");
		}

		p = p->next;
	}

	return (cnt);
}
