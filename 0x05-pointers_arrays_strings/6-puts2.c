#include "main.h"
#include <string.h>

/**
 * puts2 - print every 2 chars
 * @str: result
 */

void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
