#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s : string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar('\n');

	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
