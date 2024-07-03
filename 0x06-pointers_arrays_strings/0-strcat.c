#include "main.h"
#include <string.h>

/**
 * *_strcat - Compilation of two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

		while (src[len] != '\0')
	{
		len++;
	}

	int *ptr = strcat(dest, src);

	return (ptr);
}
