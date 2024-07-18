#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entary Point
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: (0) successful otherwich 1 failed.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int total = (int) *argv[1] * (int) *argv[2];

	printf("%d\n", total);

	return (0);
}
