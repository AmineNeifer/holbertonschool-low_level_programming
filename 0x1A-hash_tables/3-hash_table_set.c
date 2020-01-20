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
	int test = 0;
	unsigned long int index;
	hash_node_t *next_node;
	hash_node_t *current;

	if (!ht)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	if (!key || !value)
		return (0);
	next_node = malloc(sizeof(hash_node_t));
	if (!next_node)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	next_node->key = strdup(key);
	next_node->value = strdup(value);
	next_node->next = NULL;
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(next_node->key);
			free(next_node->value);
			free(next_node);
			free(current->value);
			current->value = strdup(value);
			test = 1;
			return (1);
		}
		current = current->next;
	}
	if (test == 0)
	{
		if (ht->array[index])
			next_node->next = ht->array[index];
		ht->array[index] = next_node;
	}
	return (1);
}
