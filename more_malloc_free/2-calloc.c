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
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void r;

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
