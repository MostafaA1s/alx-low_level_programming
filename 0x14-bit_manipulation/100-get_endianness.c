#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 0 big endian, 1 small endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
