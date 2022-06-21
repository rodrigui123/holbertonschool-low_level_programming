#include <stdio.h>
/**
* main -  entry poiny
* @argc : the number command line arguments
* @argv : an array of size argc
* Return: 0.
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
	{	
		printf ("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
