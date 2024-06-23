#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Prints the alphabet in lowercase and uppercase with putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (int c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

return (0);
}
