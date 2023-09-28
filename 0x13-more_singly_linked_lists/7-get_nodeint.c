#include "lists.h"

/**
  * *get_nodeint_at_index - Write a function that returns the nth node of
  * a listint_t linked list.
  * @head: Pointer to first node.
  * @index: The nth number of the node to return.
  *
  * Return: the nth node of a listint_t, if the node does not exist,
  * return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	listint_t *ptr = NULL;

	if (head == NULL)
	{
		return (NULL);
	}

	ptr = head;
	for (i = 0; ptr != NULL; i++)
	{
		if (i == index)
		{
			return (ptr);
		}

		ptr = ptr->next;
	}

	return (ptr);
}
