#include <stdio.h>

/**
 * main - entry point
 *
 * Description : alphabet
 *
 * Return: 0 s
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);

}
