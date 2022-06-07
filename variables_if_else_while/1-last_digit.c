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
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	printf("Last digit of %d is digit", n, digit);
	if (n > 5)
		printf("%d and is greater than 5\n", n);
	else if (n == 0)
		printf("%d and is 0\n", n);
	else
		printf("%d and is less than 6 and not 0\n", n);
	return (0);
}

