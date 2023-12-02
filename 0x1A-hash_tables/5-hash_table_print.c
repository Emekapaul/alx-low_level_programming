#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr = NULL;
	bool first_print = true;

	if (!ht)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			if (first_print)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				first_print = false;
			}
			else
			{
				printf(", '%s': '%s'", ptr->key, ptr->value);
			}
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
