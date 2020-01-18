#include "hash_tables.h"
/**
 * hash_djb2 - hash function using djb2
 * @str: string to put in the array of the table
 * Return: random number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
