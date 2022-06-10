#include "main.h"
/**
 * print_last_digit - prints last digit of d
 * @d : number that will change
 * Return: Always 0.
 */
int print_last_digit(int d)
{
	int lastDigit = d % 10;

	if (d < 0)
	{
	lastDigit = -lastDigit;
	_putchar(lastDigit);
	}
	else
	_putchar(lastDigit);
	return (lastDigit);
}
