#include "main.h"
#include <string.h>

/**
 * _puts - clone to puts function
 * @str: nums of string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar ('\n');
}
