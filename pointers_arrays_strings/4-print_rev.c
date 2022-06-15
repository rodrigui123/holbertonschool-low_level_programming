#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, c = 0;
	
	printf(s);
	gets(*s);
	for (i = 0; s[i] != '\0'; i++)
	{
	c++;
	}
	for (i = c-1; i >=0; i--)
	{	
		printf("%c", s[i]);
	}
	_putchar('\n');
	return (0);
}
