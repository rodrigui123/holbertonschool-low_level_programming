#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lendest;
	int lensrc;

	for (lensrc = 0; lensrc < n && src [lensrc] != '\0'; lensrc++)
	{
		src[lensrc] = dest[lendest];
	}
	dest[lendest + lensrc] = '\0';
	return (dest);
}
