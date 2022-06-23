#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1 : array n1
 * @s2 : array n2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	int i, x;
	char *arr;

	for (size1 = 0; s1 && s1[size1] != '\0'; size1++)
	{}
	for (size2 = 0; s2 && s2[size2]; size2++)
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
