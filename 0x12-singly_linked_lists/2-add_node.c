#include "lists.h"

/**
  * add_node - Write a function that adds a new node at the beginning of a
  * list_t list.
  * @head: Head point to first node
  * @str: The string to add.
  *
  * Return: Return: the address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (!head || !str)
		return (NULL);

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

	new_node->next = *head;
	*head = new_node;
	return (*head);
}
