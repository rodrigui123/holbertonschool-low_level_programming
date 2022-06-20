#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack : main string
 * @needle : other string
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[i] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
