#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints a chessboard
 * @a : array
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int column;

	for (i = 0; i < 8; i++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[i][column]);
		}
		_putchar('\n');
	}
}
