#include <stdarg.h>

/**
 * sum_them_all - Entary
 * @n: first arg and shoyld be there
 *
 * Return: 0 if n = 0 and sum if not
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
