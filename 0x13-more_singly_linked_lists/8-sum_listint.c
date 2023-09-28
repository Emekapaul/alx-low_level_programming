#include "lists.h"

/**
  * sum_listint - Write a function that returns the sum of all the data (n)
  * of a listint_t linked list.
  * @head: Pointer to the first node.
  *
  * Return: he sum of all the data (n) of a listint_t, if the list is
  * empty, return 0
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = NULL;

	if (head == NULL)
	{
		return (0);
	}

	ptr = head;

	for (; ptr != NULL;)
	{
		sum += ptr->n;

		ptr = ptr->next;
	}

	return (sum);
}
