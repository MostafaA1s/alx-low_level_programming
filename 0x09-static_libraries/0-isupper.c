#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is upper else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
