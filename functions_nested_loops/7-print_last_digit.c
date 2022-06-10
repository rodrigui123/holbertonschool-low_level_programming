#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints last digit of d
 * @d : number that will change
 * Return: Always 0.
 */

int print_last_digit(int d)
{
	int lastDigit = d % 10;

	if (d < 0)
		d = -d;
	_putchar(lastDigit);
}
