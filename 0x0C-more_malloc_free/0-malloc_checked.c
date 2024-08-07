#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entary Point
 * @b: number of bytes to allocate
 *
 * Return: ptr pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
