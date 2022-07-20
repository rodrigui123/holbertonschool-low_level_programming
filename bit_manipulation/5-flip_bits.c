#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from one number to another
 * @n : number to work with
 * @m : number to work with
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, i = 0;

	while (i != 64)
	{
		if ((n & 1) != (m & 1))
			bits++;
		n >>= 1;
		m >>= 1;
		i++;
	}
	return (bits);
}
