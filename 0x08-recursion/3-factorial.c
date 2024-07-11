#include "main.h"

/**
 * factorial - factoril of Ns
 * @n: nums that will been used
 * Return: factorial of n, or -1 if n is negative
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n = n * factorial(n - 1));
	}
}
