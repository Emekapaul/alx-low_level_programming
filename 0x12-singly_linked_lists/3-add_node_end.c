#include "lists.h"

/**
  * add_node_end - Write a function that adds a new node at the end of a
  * list_t list.
  * @head: Head to first node
  * @str: The string to add at end of list
  *
  * Return: Return: the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *new_node = NULL;

	if (!head || !str)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		new_node = NULL;
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		ptr = *head;
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}
	return (*head);
}
