#include "main.h"
#include <stdlib.h>

/**
 * *create_array - memory for the array
 * @size: The size of the array to create.
 * @c: initialize each element of the array
 * Return: pointer to (array) otherwich NULL
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return ('\0');
	}
	char *array = malloc(size * sizeof(char));

	if (array == '\0')
	{
		return ('\0');
	}

	return (array);
}
