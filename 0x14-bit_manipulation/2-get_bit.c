#include "main.h"

/**
 * get_bit - get bits of index
 * @n:nums of index
 * @index: bit to get
 *
 * Return: (1 - 0) or -1 if there an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
