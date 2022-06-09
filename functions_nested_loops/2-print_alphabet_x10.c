#include "main.h"
/**
* print_alphabet - print_alphabet will print the whole alphabet
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char r;
	for (char r=0; r<10; r++) 
	{
	for (r = 'a'; r <= 'z'; r++)
	{
	_putchar(r);
	}}
	_putchar('\n');
}
