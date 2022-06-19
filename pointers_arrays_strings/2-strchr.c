#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *fchar;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			fchar = &s[i];
			return (s[i]);
		}
	}
	return (0);
}
