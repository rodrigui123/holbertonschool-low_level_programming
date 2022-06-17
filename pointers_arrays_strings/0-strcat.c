#include "main.h"
#include <stdio.h>

/**
 * _strcat - appends src at the end of dest
 * @dest : destination string
 * @src : source string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int lensrc;
	int lendest;

	for (lendest = 0; dest[lendest]; lendest++)
	{
	}
	for (lensrc = 0; src[lensrc]; lensrc++)
	{
		src[lenscr] = dest[lendest];
		lendest++;
	}
	src[lensrc] = 0;
	return (dest);
}
