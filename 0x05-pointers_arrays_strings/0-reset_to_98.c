#include "main.h"
/**
 * reset_to_98 - update value of integer with pointer
 * @n: a pointer we use to change the value of some variable
 */

void reset_to_98(int *n)
{
	*n = &n;
	n = 98;
}
