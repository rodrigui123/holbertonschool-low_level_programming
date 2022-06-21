#include "main.h"
#include <stdio.h>

/**
 * prim - function that looks for a prime number
 * @n : number to see if its prime
 * @i : variable
 * Return: Always 0.
 */
int prim(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	prim(n, i + 1);
	return(0);
}



#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that tests if number is prime
 * @n : the number to test
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (prim(n, 2));
}
