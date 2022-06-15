#include "main.h"

/**
 * print_rev - print in reverse
 * @s : variable
 * Return: Always 0.
 */
void print_rev(char *s)
{ 
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (; i >= 0; i--)
	{
		_putchar(s[i]); 	
	}
}
