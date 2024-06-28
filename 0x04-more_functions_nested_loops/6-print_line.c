#include "main.h"

/**
 * print_line - Prototype for draw _
 * @n: Print numbers of _ that should show off
 * Return: 0 successful
 */

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar ('_');
		}
		_putchar ('\n');
	}
}
