#include "lists.h"

/**
  * free_list - Write a function that frees a list_t list.
  * @head: Pointer to first node
  */
void free_list(list_t *head)
{
	list_t *temp = NULL;

	if (head)
	{
		while (head->next)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}

		if (head->str)
		{
			free(head->str);
		}

		free(head);
	}
}
