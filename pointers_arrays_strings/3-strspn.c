#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int charfound = 0;

	while (s[i])
	{
		j = 0;
		charfound = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				charfound = 1;
		}
		if (charfound == 0)
			return (i);
		i++;
}
