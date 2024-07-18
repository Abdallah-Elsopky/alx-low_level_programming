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
	int total, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	total = num1 * num2;
	printf("%d\n", total);

return (0);
}
