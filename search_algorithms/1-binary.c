#include "search_algos.h"

/**
 * binary_search - searches value in sorted array using Binary search algorithm
 * @array: the array
 * @size: size of it
 * @value: value we are looking for
 * Return: value on success, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if (i == 0)
			printf("Searching in array: %ld", i);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

