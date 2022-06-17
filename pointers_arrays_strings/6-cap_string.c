#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[i - 1] == ',' || s[i -1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i -1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s[i]);
} 
