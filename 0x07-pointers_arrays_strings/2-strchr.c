#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search in
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of the character c
 *         or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int len = 0;

	while (s[len] != '\0')
	{
		if (s[len] == c)
		{
			return (s + len);
		}
		len++;
	}
		if (s[len] == c)
	{
		return (s + len);
	}

	return ('\0');
}
