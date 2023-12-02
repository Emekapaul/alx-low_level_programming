#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr = NULL, *temp = NULL;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];

		while (ptr)
		{
			temp = ptr;
			ptr = ptr->next;

			free(temp->key);
			temp->key = NULL;

			free(temp->value);
			temp->value = NULL;

			free(temp);
			temp = NULL;
		}
	}

	free(ht->array);
	free(ht);
	ht = NULL;
}
