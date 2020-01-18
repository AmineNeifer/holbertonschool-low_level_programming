#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 * Return: returns the pointer table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t));

	if (!table->array)
		return (NULL);

	return (table);
}
