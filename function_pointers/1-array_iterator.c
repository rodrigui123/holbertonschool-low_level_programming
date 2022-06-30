#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter on each element of an array
 * @array : array  
 * @size : size of the array
 * @action : function to be called
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size_t; i++)
		action(array[i]);
}
