#include "main.h"
/**
* _islower - identifies lower case letters
* @c - variable which will change according the letter
* Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c > 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
