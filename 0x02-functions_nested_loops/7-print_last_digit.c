#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: extract the last digit
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		lastdigit = -1 * (n % 10);
	}
	else
	{
		n = lastdigit % 10;
	}
	_putchar (lastdigit + '0');

	return (lastdigit);
}
