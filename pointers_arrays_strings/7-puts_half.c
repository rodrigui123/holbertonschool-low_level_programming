#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str : string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len;
	int middle;

	for (len = 0; str[len] != '\0'; ++len)
	{
	}
	middle = len / 2;
	if (len %2 != 0)
	{
		middle++;
	}
	for (; str[middle] != '\0'; middle++)
	{
		_putchar(str[middle]);
	}
	_putchar('\n');
}
