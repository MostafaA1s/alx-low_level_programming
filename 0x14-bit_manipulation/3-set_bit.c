#include "main.h"

/**
 * set_bit - change value of bit at index to 1
 * @n: unsigned long int pointer
 * @index: index 
 *
 * Return: 1 work, -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
