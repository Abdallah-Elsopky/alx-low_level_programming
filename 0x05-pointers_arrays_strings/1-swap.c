#include "main.h"

/**
 * swap_int - swap two variables
 * @a: first var
 * @b: second var
 */

void swap_int(int *a, int *b)
{
	int *one = &a;
	int *two = &b;
	*a = one;
	*b = two;

}
