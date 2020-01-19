#include "hash_tables.h"
/**
 * key_index - generates index out of a given key.
 * @key: key type string.
 * @size: size of the table's array
 * Return: index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
