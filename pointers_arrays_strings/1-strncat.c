#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest : string destination
 * @src : source string
 * @n : last char from string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lendest;
	int lensrc;

	for (lendest = 0; dest[lendest]; lendest++)
	{
	}
	for (lensrc = 0; lensrc < n && src[lensrc] != '\0'; lensrc++)
	{
		dest[lendest] = src[lensrc];
	}
	dest[lendest + lensrc] = '\0';
	return (dest);
}
