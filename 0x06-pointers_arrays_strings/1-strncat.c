#include "main.h"

/**
 * _strncat - copy string 2 to string 1 with [n] Bytes
 * @dest: first string and the pointer
 * @src: second string that will be added
 * @n: number of Bytes that will be added
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len] = '\0';

	return (dest);
}
