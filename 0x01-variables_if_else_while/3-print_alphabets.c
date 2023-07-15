#include <stdio.h>

/**
 * main - entry point
 *
 * Description: alphabet lower and upper
 *
 * Return: 0 s
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');

	return (0);
}
