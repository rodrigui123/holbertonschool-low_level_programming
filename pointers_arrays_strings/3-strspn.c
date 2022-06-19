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
	int charf = 0;

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
