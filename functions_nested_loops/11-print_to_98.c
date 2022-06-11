#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		_putchar((n) + 48);
		_putchar(',');
		_putchar(' ');
	}
	for (; n > 98; n--)
	{
		_putchar((n) + 48);
		_putchar(',');
		_putchar(' ');
	}
	for (; n = 98;)
	{
		_putchar((n) + 48);
	}
	_putchar (10);
}
