#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_get - function to retrieve value that corresponds to a key.
 * @ht: pointer to hash table.
 * @key: key we want to retrieve it's value.
 * Return: the value, otherwise NULL if something went wrong.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht)
		return (NULL);
	if (!key || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
