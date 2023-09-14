#include "main.h"

/**
 * clear_bit - change value of bit at index to 0.
 * @n: unsigned long int pointer
 * @index: index 
 *
 * Return: 1 work, -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
