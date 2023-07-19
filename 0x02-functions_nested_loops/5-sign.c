#include "main.h"

/**
 * print_sign - prints the sign of number
 *
 * @n: input passed to check
 *
 * Return: 1 and print + if greater than 0
 *	0 and print 0 if 0
 *	-1 and print - if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

