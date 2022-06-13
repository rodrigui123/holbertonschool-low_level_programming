#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n : stores number
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a, b;

	b = 0;
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			for (a = 0; a <= b ; a++)
				if (a != 0)
					_putchar(32);
			_putchar(92);
			_putchar('\n');
			b++;
		}
	}
	else
		_putchar('\n');
}
