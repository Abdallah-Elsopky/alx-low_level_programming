#include "main.h"

/**
 * *_memset - clone to memset function
 * @s: our pointer to the string
 * @b: constant byte
 * @n: first Bytes retured
 *
 * Return: s pointer to the string array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
