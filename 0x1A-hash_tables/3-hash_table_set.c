#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key:  is the key.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr = NULL, *new_ele = NULL;
	unsigned long int idx = 0;

	if (!ht || !key || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	ptr = ht->array[idx];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);

			return (1);
		}
		ptr = ptr->next;
	}
	new_ele = malloc(sizeof(hash_node_t));
	if (!new_ele)
		return (0);
	new_ele->key = strdup(key);
	new_ele->value = strdup(value);
	new_ele->next = NULL;
	if (!new_ele->key || !new_ele->value)
	{
		free(new_ele->key);
		free(new_ele->value);
		free(new_ele);
		return (0);
	}
	if (ht->array[idx])
		new_ele->next = ht->array[idx];
	ht->array[idx] = new_ele;
	return (1);
}
