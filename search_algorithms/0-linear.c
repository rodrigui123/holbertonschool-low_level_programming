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
	int index = 0;
	size_t i = 0;

	if (array == NULL)
	for (; i < size; i++)
	{
		if (array[i] == value)
		{
		index = i;
		printf("Value checked array[%d] = [%li]\n", array[i], i);
		break;
		}
	}
	return (-1);
}
