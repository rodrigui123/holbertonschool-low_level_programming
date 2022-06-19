#include "main.h"
#include <stdio.h>

/**
 * _memcpy - cpies memory area from a string to another
 * @dest : destination string
 * @src : source string
 * @n : last number of string memory
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
