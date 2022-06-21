#include <stdio.h>
/**
* main -  entry point
* @argc : not used
* @argv : an array of size argc
* Return: 0.
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
	{	
		printf ("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
