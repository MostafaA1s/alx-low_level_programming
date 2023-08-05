#include "main.h"

/**
 * _abs - compute absolute
 *
 * @n: char passed to check
 *
 * Return: 0 succ
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
