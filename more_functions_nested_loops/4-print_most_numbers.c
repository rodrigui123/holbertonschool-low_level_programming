#include "main.h"

/**
 * print_numbers - prints the numbers asked
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	if ((n != '2') && (n != '4'))
	{
		_putchar(n);
	}
	}
	_putchar('\n');
}
