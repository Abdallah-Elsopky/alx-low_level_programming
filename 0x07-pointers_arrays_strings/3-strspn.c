#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the main string to be scanned
 * @accept: the string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count = 0;
	int found;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
	}
	return (count);
}
