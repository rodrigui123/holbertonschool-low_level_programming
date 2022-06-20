#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack : main string
 * @needle : other string
 * Return: a pointer to the beginning of the located substring, or NULL if the substring is not found.
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
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
