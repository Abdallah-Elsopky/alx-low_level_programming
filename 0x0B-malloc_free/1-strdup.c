#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Entary point
 * @str: our string
 *
 * Return: (copy) or NULL
 */

char *_strdup(char *str)
	{
	if (str == NULL)
	{
		return (NULL);
	}

	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	char *copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < length; i++)
	{
		copy[i] = str[i];
	}
	copy[length] = '\0';

	return (copy);
}
