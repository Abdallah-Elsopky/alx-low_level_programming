#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Declare the j  of random number (n)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int j;

	if (j > 5)
	{
		j = n % 10;
		printf("j of %d is %d and is greater than 5\n", n, j);
	}
	else if (j > 6 && j != 0)
	{
		j = n % 10;
		printf("j of %d is %d and is less than 6 and not 0\n", n, j);
	}
	else
	{
		j = n % 10;
		printf("j of %d is %d and is 0\n", n, j);
	}
	return (0);
}
