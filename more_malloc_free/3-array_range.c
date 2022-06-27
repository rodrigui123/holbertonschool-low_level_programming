#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* array_range - function that creates an array of integers, min to max
* @min: min value
* @max: max value
* Return: pointer to array
*/
int *array_range(int min, int max)
{
	int *arr, arlen, i;

	if (min > max)
		return (NULL);
	arlen = max - min + 1;
	arr = malloc(arlen * sizeof(int));
	
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arr[i] = min;
	return (arr);
}
