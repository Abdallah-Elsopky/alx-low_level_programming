#include "main.h"

/**
 * set_bit - swap num you want to 0
 * @n: num of index
 * @index: pointeing to the bit we want to change
 *
 * Return: 1 success or -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

    if (*n & 1L << index)
        *n ^= 1L << index;

    return (1);
}
