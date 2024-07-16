#include <stdlib.h>

/**
 * create_array - Creates an array of chars.
 * @size: Size of the array
 * @c: Char to initialize the array with
 *
 * Return: Pointer to the array, or NULL if it fails or if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
