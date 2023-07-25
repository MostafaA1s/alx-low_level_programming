#include "main.h"

/**
 * print_rev - prints a string reverse
 * @s: input string
 * Return: no return
 */
void print_rev(char *s)
{
	int count = 0;

	count = _strlen(s);

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
