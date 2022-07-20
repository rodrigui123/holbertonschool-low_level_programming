#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n : number
 * @index : position of number to set bit to 0
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1 << index), cp = *n;

	if (n)
	{
		if (index < 64)
		{
			*n = mask & cp;
			return (1);
		}
	}
	return (-1);
}
