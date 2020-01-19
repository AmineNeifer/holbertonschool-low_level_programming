#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - put values in hash table.
 * @ht: our hash table.
 * @key: string type.
 * @value: value for our key , "key:value".
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *next_node;

	if (!key)
		return (0);

	next_node = malloc(sizeof(hash_node_t *));
	if (!next_node)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	next_node->key = strdup(key);
	next_node->value = strdup(value);
	next_node->next = NULL;

	if (ht->array[index] != NULL)
	{
		ht->array[index]->next = next_node;
	}
	else
	{
		ht->array[index] = next_node;
	}
	return (1);
}
