#include "lists.h"

/**
  * listint_len - Write a function that returns the number of elements in
  * a linked listint_t list.
  * @h: Pointer to first node.
  *
  *Return: Number of elements
  */
size_t listint_len(const listint_t *h)
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
		ptr = ptr->next;
	}

	return (count);
}
