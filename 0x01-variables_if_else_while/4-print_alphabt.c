#include <stdio.h>

/**
 * main - entry point
 *
 * Description: alphabet except q and e
 *
 * Return: 0 s
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
