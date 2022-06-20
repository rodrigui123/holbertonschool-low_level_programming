#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '0')
		return;
	if (*s < 0)
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s);
	}
}
