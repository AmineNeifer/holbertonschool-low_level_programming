#include "search_algos.h"
/**
 * linear_search - algorithm using linear search to find a value in an array
 *
 * @array: array we want to search a value in.
 * @size: size of the array.
 * @value: value we are looking for its index.
 *
 * Return: -1 if fails otherwise, the index of the value.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int) i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
