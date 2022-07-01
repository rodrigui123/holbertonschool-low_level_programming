#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - function that sums a and b
* @a : variable
* @b : variable
* Return: op_add
**/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - sub function
* @a : variable
* @b : variable
* Return: op_sub
**/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - function that multiplies
* @a : variable
* @b : variable
* Return: op_mul
**/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - divide function
* @a : variable
* @b : variable
* Return: op_div
**/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - mod function
* @a : variable
* @b : variable
* Return: op_mod
**/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
