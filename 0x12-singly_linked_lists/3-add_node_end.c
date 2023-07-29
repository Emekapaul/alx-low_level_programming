#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_node_end - function that adds a new node at the end of
  *a list_t list.
  *@head: Points to the struct
  *@str: Prints a string
  *Return: a struct node.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	size_t len = 0;
	list_t *temp = *head;

	while (str[len])
		len++;

	last_node = (list_t *)malloc(sizeof(list_t));

	if (last_node == NULL)
	{
		return (NULL);
	}

	last_node->str = strdup(str);
	last_node->len = len;
	last_node->next = NULL;

	if (*head == NULL)
	{
		(*head) = last_node;
		return (last_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = last_node;

	return (last_node);
}
