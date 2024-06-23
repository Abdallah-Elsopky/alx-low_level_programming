#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * prints the alphabet in lowercase with putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp[26];
	int i;

	for (i = 0; i < 26; i++)
{
	alp[i] = 'a' + i;
}

	for (i = 0; i < 26; i++)
{
	putchar(alp[i]);
	putchar('\n');
}

return (0);
}
