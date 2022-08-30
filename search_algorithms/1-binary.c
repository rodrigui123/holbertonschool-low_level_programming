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
	size_t i = 0, left = 0, right = size -1, mid = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			if (i > left)
				putchar(',');
			printf(" %d", array[i]);
		}
		mid = left + (right - left) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
