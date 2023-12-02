#include "hash_tables.h"

/**
 * hash_table_create - Write a function that creates a hash table.
 * @size: where size is the size of the array
 *
 * Return: Returns a pointer to the newly created hash table, If something
 * went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
