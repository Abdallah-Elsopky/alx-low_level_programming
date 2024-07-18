#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entary Point
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: (0) successful or 1 if fail.
 */

int main(int argc, char *argv[])
{
	int change = 0;
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	if (n >= 25)
	{
		change = n / 25;
		n = n % 25;
	}
	if (n >= 10)
	{
		change += n / 10;
		n = n % 10;
	}
	if (n >= 5)
	{
		change += n / 5;
		n = n % 5;
	}
	if (n >= 2)
	{
		change += n / 2;
		n = n % 2;
	}
	change += n;
	printf("%d\n", change);
return (0);
}
