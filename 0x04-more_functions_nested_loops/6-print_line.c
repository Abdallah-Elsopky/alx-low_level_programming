#include "main.h"

/**
 * print_line - Prototype for draw _
 * @n: Print numbers of _ that should show off
 * Return: 0 successful
 */

void print_line(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar ('_');
				_putchar ('\n');
			}
			_putchar ('\n');
		}
	}
}
