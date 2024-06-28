#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
	if (c == i)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	}
}
