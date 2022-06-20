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

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == '\0' && c == '\0')
		return (&s[i]);
	return (NULL);
}
