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
	int lenscr;
	int lendest;

	for (lendest = 0; dest[lendest]; lendest++)
	{
	}
	for (lenscr = 0; src[lenscr]; lenscr++)
	{
		src[lenscr] = dest[lendest];
		lendest++;
	}
	dest[lendest] = 0;
	return (dest);
}
