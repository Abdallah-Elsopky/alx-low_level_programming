#include "main.h"

/**
 * binary_to_uint - convert binary num to unit
 * @b: the string of 0s and 1
 *
 * Return: result or 0 if it is not binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			result = (result << 1) | 1;
		else if (b[i] == '0')
			result <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}


	return (result);

}
