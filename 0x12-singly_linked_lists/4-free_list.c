#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  *free_list - function that frees a list_t list.
  *@head: Struct node
  */
void free_list(list_t *head)
{
	list_t *free_node;

	while (head)
	{
		free_node = head->next;
		free(head->str);
		free(head);
		head = free_node;
	}
}
