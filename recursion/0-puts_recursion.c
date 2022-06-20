#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		return (NULL);	

	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursive(s);
	}
