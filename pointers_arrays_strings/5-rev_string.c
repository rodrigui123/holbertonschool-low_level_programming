#include "main.h"
#include <stdio.h>

/**
 * rev_string - print the string reverse
 * @s : variable
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int a;
	int b;
	char str[] = "";

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	b = i - 1;
	for (a = 0; a < b; a++)
	{
		str[0] = s[b];
		s[b] = s[a];
		s[a] = str[0];
		b--;
	}
}
