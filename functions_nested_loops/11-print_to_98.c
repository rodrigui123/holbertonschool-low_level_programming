#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - the numbers printed
 * @n : will contain the different numbers
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{	
			printf("%d", n);
			if (n != 98)
                        	printf(", ");
		}
	}	
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{	
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
		
	}
	_putchar('\n');
}
