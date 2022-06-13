#include "main.h"

/**
 * more_numbers - numbers to print
 * Return: Always 0.
 */
void more_numbers(void)
{
	int r;
	int n;

	for (r = 0; r <= 10; r++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > '9')
			{
				_putchar(n);
				_putchar((n % 10) + '0');
			}
		 		_putchar('\n');
		}
	}
}
