#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, 2, to 9
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
