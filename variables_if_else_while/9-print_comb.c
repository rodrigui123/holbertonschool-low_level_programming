#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int r;

	for (r = 48; r <= 57; r++)
	{
	putchar(r);
	if (r < 57)
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
