#include "main.h"

/**
 * binary_to_uint - convert binary num to unit
 * @b: the string of 0s and 1
 *
 * Return: result or 0 if it is not binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i;

	if (!b || !*b)
		return (0);

	num = i = 0;
	while (b[i])
	{
		if (b[i] > 49)
			return (0);
		else if (b[i] == 49)
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		i++;
	}
	return (num);
}
