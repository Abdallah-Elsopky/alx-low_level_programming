#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entary
 * @n: first arg and shoyld be there
 *
 * Return: 0 if n = 0 and sum if not
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, j;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		sum += j;
	}
	va_end(args);
	return (sum);
}
