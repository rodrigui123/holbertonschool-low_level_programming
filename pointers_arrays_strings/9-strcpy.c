#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 * @dest : pointer
 * @src : pointer to copy the string
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int b;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = 0
	return (dest);
}
