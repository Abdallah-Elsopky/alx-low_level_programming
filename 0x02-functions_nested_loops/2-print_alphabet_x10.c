#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int line;
	char c;

	for (line = 0; line <= 9; line++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar (c);

		}
	_putchar ('\n');
	}
}
