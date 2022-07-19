#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b : the array of 0s and 1s
 * Return: num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (!b)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		num <<= 1;
		num += b[i] - '0';
		i++;
	}
	return (num);
}
