#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1 : string n1
 * @s2 : string n2
 * @n : the number of char i want from s2
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x, size1;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = strlen(s1);
	i = 0;
	if (n >= strlen(s2))
		size1 += strlen(s2);
	else if (n < strlen(s2))
		size1 += n;
	arr = malloc(size1 * sizeof(char) + 6);
	if (arr == NULL)
		return (NULL);
	if (s1 != NULL || strlen(s1) > 0)
	{
		while (i < strlen(s1))
		{
			arr[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL || strlen(s2) > 0)
	{
		if (n < strlen(s2))
		{
			for (x = 0; x < n; x++, i++)
				arr[i] = s2[x];
		}
		else if (n >= strlen(s2))
			for (x = 0; s2[x]; x++, i++)
				arr[i] = s2[x];
	}
	arr[i] = '\0';
	return (arr);
}
