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
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}

	dest[len] = '\0';

	return (dest);
}
