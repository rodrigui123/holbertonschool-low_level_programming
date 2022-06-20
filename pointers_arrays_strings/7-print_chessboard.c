#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int column;

	for (i; i < 8; i++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[i][column]);
		}
		_putchar('\n');
	}
}		
