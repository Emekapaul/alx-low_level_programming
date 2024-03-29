#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht:  is the hash table you want to look into
 * @key: key is the key you are looking for
 *
 * Return: the value associated with the element, or NULL if key
 * couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	while (ht->array[idx])
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			return (ht->array[idx]->value);
		}

		ht->array[idx] = ht->array[idx]->next;
	}

	return (NULL);
}
