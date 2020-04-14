#include "search_algos.h"
#include "unistd.h"
/**
 * binary_search - algorithm using binary search to find a value in an array
 *
 * @array: array we want to search a value in.
 * @size: size of the array.
 * @value: value we are looking for its index.
 *
 * Return: -1 if fails otherwise, the index of the value.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (rec(array, 0, size - 1, value));
}

/**
 * rec - recursive function to be used for binary search
 *
 * @array: array we want to search a value in.
 * @deb: index of the first index.
 * @end: index of the last index.
 * @value: value we're looking for
 *
 * Return: index of the value, -1 if not found.
 */
int rec(int *array, int deb, int end, int value)
{
	int mid, size, i;
	mid = (end + deb) / 2;
	size = end - deb + 1;
	printf("Searching in array: ");
	for (i = deb; i <= end; i++)
	{
		if (i == end)
		{
			printf("%d\n", array[i]);
			break;
		}
		printf("%d, ", array[i]);
	}
	if (size == 1)
	{
		if (value == array[deb])
			return (value);
		return (-1);
	}
	if (value == array[mid])
		return(mid);
	else if (value > array[mid])
		return (rec(array, mid + 1, end, value));
	else if (value < array[mid])
		return (rec(array, deb, mid -1, value));
	return (-1);
}
