#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entary Point
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: (0) successful or 1 if fail.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, k;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		k = atoi(argv[i]);
		sum = sum + k;
	}


	printf("%d\n", sum);
	return (0);
}
