#include "main.h"
/**
* print_alphabet_x10 - prints alphabet 10x times
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char l;
	int n;

	for (n = 0; n < 10; n++)
	{
	for (l = 'a'; l <= 'z'; l++)
	_putchar(l);
	_putchar('\n');
	}
}
