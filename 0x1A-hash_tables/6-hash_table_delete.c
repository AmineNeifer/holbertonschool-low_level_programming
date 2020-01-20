#include <stdlib.h>
#include "hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;

	if (!ht)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			free(ht->array[i]);
		while (ht->array[i])
		{
			current = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}
