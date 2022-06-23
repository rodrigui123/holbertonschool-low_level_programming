#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *ar;
	int i, len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
	{
	}
	ar = malloc(len * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for ( i = 0; i < len; i++)
	{	
		ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar);
}
