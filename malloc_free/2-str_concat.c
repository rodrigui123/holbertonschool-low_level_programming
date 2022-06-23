#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	int i, x;
	char *arr;

	for (i = 0; i < size1; i++)
	{}
	for (x = 0; x < size2; x++)
	{}
	arr = malloc((size1 + size2) + 1);
	i = 0;
	x = 0;
	if (arr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (i < size1)
		{
			arr[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (x < size2)
		{
			arr[i] = s2[x];
			i++, x++;
		}
	}
	arr[i] = '\0';
	return (arr);
}
