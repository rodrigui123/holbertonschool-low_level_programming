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

	if (dest[0] == 0 || src[0] == 0)
		return (dest);

	else if (n > 0)
	{	
		for (lendest = 0; dest[lendest]; lendest++)
		{
		}
		for (lensrc = 0; src[lensrc]; lensrc++, lendest++)
		{	
			dest[lendest] = src[lensrc];
		}
	}
	dest[lendest + lensrc] = '\0';
	return (dest);
}
