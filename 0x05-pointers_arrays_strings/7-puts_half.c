#include "main.h"

/**
 * puts_half - prints last half of a string
 * @str: long of our string or half in out sitution
 */

void puts_half(char *str)
{
	int i, start;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2 + 1;
	}

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
