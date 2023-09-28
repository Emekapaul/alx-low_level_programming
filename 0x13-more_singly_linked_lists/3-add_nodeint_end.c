#include "lists.h"

/**
  * *add_nodeint_end - Write a function that adds a new node at the end of
  * a listint_t list.
  * @head: Pointe to the first node.
  * @n: The integer to print.
  *
  * Return: the address of the new element, or NULL if it failed.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *ptr = NULL;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}

	else
	{
		ptr = *head;
		for (; ptr->next != NULL; )
		{
			ptr = ptr->next;
		}

		ptr->next = new;
	}

	return (new);
}
