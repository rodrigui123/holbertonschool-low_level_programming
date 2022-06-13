#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int d, r;

	t = 0;
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			for (d = 0; d <= r ; d++)
				if (d != 0)
					_putchar(32);
			_putchar(92);
			_putchar('\n');
			r++;
		}
	}
	else
		_putchar('\n');
}
