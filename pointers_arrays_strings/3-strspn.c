#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s : string
 * @accept : string
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int charf = 0;

	while (s[i])
	{
		j = 0;
		charf = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				charf = 1;
		}
		if (charf == 0)
			return (i);
		i++;
	}
	return (i);
}
