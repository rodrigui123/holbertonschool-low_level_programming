#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb : number of elements in the array
 * @size: bytes per elements
 * Return: void pointer to the memory location.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *r;

	if (size == 0)
		return (NULL);
	if (nmemb == 0)
		return (NULL);
	r = malloc(nmemb * size);
	if (r == NULL)
		return (NULL);
	memset(r, 0, nmemb * size);
	return (r);
}
