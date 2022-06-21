#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s : string
 * @b : content of i position
 * @n : the last position of the string
 * Return: string s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
