#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - prints last digit of d
 * @d : number that will change
 * Return: Always 0.
 */
int print_last_digit(int d)
{
	d = abs(d % 10);
	_putchar(d + '0');
	return (d);
}
