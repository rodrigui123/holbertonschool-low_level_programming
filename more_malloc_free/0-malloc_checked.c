#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b : variable of array
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b * sizeof(char));
	if (ar == NULL)
		exit(98);
	return (ar);
}
