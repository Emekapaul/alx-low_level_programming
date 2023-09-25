#include "lists.h"
/**
 * add_node_end - Write a function that adds a new node at the beginning
 * oflist_t list.
 * @head: Pointer to frist struct node
 * @str: The string to add.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *ptr = NULL, *new = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		new->str = strdup("(nil)");
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
		ptr = *head;
		for (; ptr->next != NULL;)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (new);
}
