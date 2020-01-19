#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
/**
 * hash_table_print - print a hash table.
 * @ht: pointer to hash table.
 * Return: None.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	int formatting = 0;
	unsigned long int i;

	if (!ht)
	{
		printf("{}\n");
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while (current)
			{
				if (formatting == 0)
				{
					printf("{'%s': '%s'", current->key, current->value);
					formatting++;
				}
				else
					printf(", '%s': '%s'", current->key, current->value);
				current = current->next;
			}
		}
	}
	if (formatting == 0)
		printf("{}\n");
	else
		printf("}\n");
}
