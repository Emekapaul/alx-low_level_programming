#include "lists.h"

/**
  * *insert_nodeint_at_index - Write a function that inserts a new node at
  * a given position.
  * @head: Pointer to the first node.
  * @idx: the index of the list where the new node should be added.
  * @n: The node to be added.
  *
  * Return: the address of the new node, or NULL if it failed.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *ptr = NULL, *new = NULL;
	
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (head == NULL)
	{
		*head = new;
	}

	else
	{
		ptr = *head;

		for (i = 0; ptr != NULL; i++)
		{
			if (i == idx)
			{
				new->next = ptr;
				ptr = new;
			}

			ptr = ptr->next;
		}
	}

	return (new);
}
