#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest : string destination
 * @src : source string
 * @n : last char from string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = strlen(dest);
	int i = 0;


	if (n == 0)
		return (dest);
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
		dest[destlen] = '\0';
	}
	return (dest);
}
