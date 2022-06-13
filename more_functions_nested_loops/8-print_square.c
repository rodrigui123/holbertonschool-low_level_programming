#include "main.h"
/**
* print_square - prints a square of hashtags
* @size: variable that stores size of square
*/
void print_square(int size)
{
	int a, r;

	if (size <= 0)
		_putchar('\n');
	else
		for (r = 0; r < size; r++)
		{
			for (a = 0; a < size; a++)
				_putchar(35);
			_putchar('\n');
		}
}
