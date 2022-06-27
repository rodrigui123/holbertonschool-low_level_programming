#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* array_range - creates an array of integers (from min to max)
* @min: min value
* @max: max value
* Return: pointer to new array
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
		arr[] = min;
	return (arr);
}
