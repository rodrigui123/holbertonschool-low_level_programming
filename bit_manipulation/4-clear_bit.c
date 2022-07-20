#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~ (1 << index), cp = *n;

	if (n)
	{
		if (index < 64)
		{
			*n = mask & index;
			return (1);
		}
	}
	return (-1);
}
