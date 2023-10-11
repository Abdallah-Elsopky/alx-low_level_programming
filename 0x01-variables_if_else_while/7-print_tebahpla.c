#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print z-a in reverse
 *
 * Return: 0 (success)
*/

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
