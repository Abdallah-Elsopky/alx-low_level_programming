#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - string
 * @separator: c
 * @n: args num
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
