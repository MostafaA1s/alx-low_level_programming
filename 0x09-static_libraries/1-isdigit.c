#include "main.h"

/**
 * _isdigit - checks nuum is between 0 to 9.
 * @c: input number.
 * Return: 1 if is a number (0 to 9), 0 else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
