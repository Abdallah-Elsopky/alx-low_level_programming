#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - convert binary num to unit
 * @b: the string of 0s and 1
 *
 * Return: result or 0 if it is not binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b != NULL)
	{
		if (*b != '0' && *b != '1')
			return (0);

	result = result << 1;

	if (*b == '1')
		result = result | 1;

		b++;
	}

	return (result);

}