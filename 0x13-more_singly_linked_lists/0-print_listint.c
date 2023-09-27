#include "lists.h"

/**
  * print_listint - Write a function that prints all the elements of a
  * listint_t list.
  * @h: POinter to the first node.
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	unsigned int count;
	const listint_t *ptr = NULL;

	if (h == NULL)
	{
		return (0);
	}

	ptr = h;

	for (count = 0; ptr != NULL; count++)
	{
		printf("%d\n", ptr->n);

		ptr = ptr->next;
	}

	return (count);
}
