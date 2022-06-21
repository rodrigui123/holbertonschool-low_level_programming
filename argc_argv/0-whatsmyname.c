#include <stdio.h>
/**
* main - 
* @argc : 
* @argv :
* Return: 0.
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
