#include "main.h"

/**
 * main - Entry point
 *
 *Discription: prints _putchar 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char t[] = "_putchar";
	int i;

	for (i = 0; t[i]; i++)
	{
		_putchar(t[i]);
	}
	_putchar('\n');

	return (0);
}
