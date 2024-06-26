#include "main.h"

/**
 * main - check the code
 *
 * Description: prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet(void);
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
