#include "search_algos.h"

/**
 * linear_search - searches for a value using the Linear search algorithm
 * @array: the array
 * @size: size of array
 * @value: value inside each position 
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
