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
	char r;

	for (r = 'a'; r <= 'z'; r++)
	if (r != 'q' && r != 'e')
	{
	putchar(r);
	}
	putchar('\n');
	return (0);
}
