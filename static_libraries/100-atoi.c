#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * @s : string
 * Return: Always 0.
 */
int _atoi(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _atoi(s + 1));
}
