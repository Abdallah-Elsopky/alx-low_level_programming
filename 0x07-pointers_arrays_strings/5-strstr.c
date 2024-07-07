#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search within
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int needle_length = 0;

	while (needle[needle_length] != '\0')
		needle_length++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < needle_length; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (j == needle_length)
			return (&haystack[i]);
	}

	return ('\0');
}
