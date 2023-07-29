#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_node - function that adds a new node at the beginning of a
  *list_t list
  *@head: THe head to create.
  *@str: THe string to print
  *Return: a struct node.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0;

	while (str[len])
		len++;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
