#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entary Point
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: (0) successful.
 */

int main(int argc, char *argv[])
{
	int mult, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mult = n1 * n2;
	printf("%d\n", mult);
return (0);
}
