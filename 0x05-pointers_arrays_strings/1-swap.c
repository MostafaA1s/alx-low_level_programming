#include "main.h"

/**
 * swap_int - swaps the values of 2 int
 * @a: pointer for int1
 * @b: pointer for int2
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
