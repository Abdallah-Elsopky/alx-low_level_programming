#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
	putchar(num < 10 ? num + '0' : num - 10 + 'a');
	}

	putchar('\n');

	return (0);
}
