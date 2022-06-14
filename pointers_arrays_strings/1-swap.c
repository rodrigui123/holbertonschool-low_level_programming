#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values
 * @a : variable
 * @b : variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
