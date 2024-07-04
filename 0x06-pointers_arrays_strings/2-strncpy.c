#include "main.h"

/**
 * _strncpy - Copies up to n characters from src to dest.
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of characters to copy
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++, len++)
	{
		dest[len + i] = src[i];
	}

	dest[len] = '\0';

	return (dest);
}
