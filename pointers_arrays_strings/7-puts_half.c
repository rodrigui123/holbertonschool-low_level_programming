#include "main.h"

/**
 * main - check the code
 *
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
	for (; str[middle] != '\0'; middle++)
	{
		_putchar(str[middle]);
	}
}	
