#include "lists.h"

/**
  * free_listint2 - Write a function that frees a listint_t list.
  * @head: The pointer to the node to free.
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
