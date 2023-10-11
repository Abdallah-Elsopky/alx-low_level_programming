#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aphlhabet letters except q and e
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
