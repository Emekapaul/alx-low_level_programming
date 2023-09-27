#include "lists.h"

/**
  * *add_nodeint - Write a function that adds a new node at the beginning
  * of a listint_t list.
  * @head: Pointer to first node
  * @n: The int to be added to the node
  *
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

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
		new->next = *head;
		*head = new;
	}

	return (new);




}
