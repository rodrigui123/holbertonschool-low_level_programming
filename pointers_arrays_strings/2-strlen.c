#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++1);
	return (i);
}
