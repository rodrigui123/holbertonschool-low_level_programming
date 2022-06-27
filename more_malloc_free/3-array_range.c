#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *arr, Lenar, i;

	if (min > max)
		return (NULL);
	Lenar = (max - min) + 1;
	arr = malloc(Lenar * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; Lenar <= max; i++);
		arr[i] = min;
	return (i);
}
