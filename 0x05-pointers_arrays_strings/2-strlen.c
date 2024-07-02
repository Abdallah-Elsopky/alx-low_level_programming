#include "main.h"
#include <string.h>

/**
 * _strlen - clone to strlen function
 * @s: pointer to string
 * Return: nums of string chars '?'
 */

int _strlen(char *s)
{
	int lenigh = 0;

	while (s[lenigh] != 0)
	{
		lenigh++;
	}

	return (lenigh);
}
