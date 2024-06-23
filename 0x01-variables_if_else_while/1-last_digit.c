#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Declare the last  of random number (n)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last;

	if (last > 5)
	{
		last = n % 10;
		printf("Last of %d is %d and is greater than 5\n", n, last);
	}
	else if (last > 6 && last != 0)
	{
		last = n % 10;
		printf("Last of %d is %d and is less than 6 and not 0\n", n, last);
	}
	else
	{
		last = n % 10;
		printf("Last of %d is %d and is 0\n", n, last);
	}
	return (0);
}
