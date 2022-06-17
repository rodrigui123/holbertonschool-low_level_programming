#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
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
