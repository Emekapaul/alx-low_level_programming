#include "lists.h"

/**
  * *add_node - Write a function that adds a new node at the beginning of
  * a list_t list.
  * @head: Pointer to the first node.
  * @str: The string to print.
  *
  * Return: the address of the new element, or NULL if it failed.
  */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new = NULL;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		new->str = strdup(str);
		new->len = 0;
		new->next = NULL;
	}

	else
	{
		for (len = 0; str[len] != '\0'; len++)
		{
		}

		new->str = strdup(str);
		new->len = len;
		new->next = NULL;
	}

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
