#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n : direcction to a number
 * @index : the position of the number to set the bit
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = (1 << index), cp = *n;

	if (n)	
	{
		if (index < 64)
		{
			*n = num | index;
			return (1);
		}
	}
	return (-1);
}
