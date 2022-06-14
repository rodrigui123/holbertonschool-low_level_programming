#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	char *str = "I do not fear computers. I fear the lack of them - Isaac Asimov \n";

while (*str != '\0')
{
	_putchar(*str);
	str++;
}
