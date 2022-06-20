#include "main.h"
#include <stdio.h>

/**
 * squareroot - find the squareroot of a number
 * @i : number to be muliplied to reach the squareroot
 * @n : the number to do the squareroot
 * Return: Always 0.
 */
int squareroot(int i, int n)
{
	int square = 0;

	square = i * i;
	if (square <= n)
	{
		if (square == n)
			return (i);

		else
			return (squareroot(i + 1, n));
	}
	return (-1);
}

#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n : base number to the squareroot
 * Return: Always 0.
*/
int _sqrt_recursion(int n)
{
	return (squareroot(1, n));
}
