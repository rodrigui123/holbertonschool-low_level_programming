#include "main.h"
#include <stdio.h>

/**
 * _strchr - find the first char appereance
 * @s : string
 * @c : the character
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
			return (fchar);
		}
	}
	return (0);
}
