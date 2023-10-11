#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase the in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*a - z*/
	while (ch <= 'z')
	{
		pitchar(ch);
		ch++;
	}

	/*A - Z*/
	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
