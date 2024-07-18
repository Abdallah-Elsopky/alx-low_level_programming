#include <stdio.h>

/**
 * main - Entary Point
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: (0) successful.
 */

int main(int argc __attribute__((unused)), char argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
