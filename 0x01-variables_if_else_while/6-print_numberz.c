#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar while using int variable
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
