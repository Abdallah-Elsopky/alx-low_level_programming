#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: numbers of diagonals
 * Return: 0 successful
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar (' ');
		}
		_putchar('\\');
		_putchar ('\n');
	}

}
