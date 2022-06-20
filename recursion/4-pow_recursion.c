#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - raises the value of x to the power of y
 * @x : value to be raised
 * @y : the value to raise x
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
