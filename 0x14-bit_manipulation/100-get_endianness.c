#include "main.h"

/**
 * get_endianness - return endiannes
 *
 * Return: 0 if big 1 if small
 */

int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
