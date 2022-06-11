#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{	
			_putchar((n) + 48);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			_putchar((n) + 48);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n = 98)
	{
		for (; n == 98;)
		{
			_putchar((n) + 48);
		}
	}
	_putchar (10);
}
