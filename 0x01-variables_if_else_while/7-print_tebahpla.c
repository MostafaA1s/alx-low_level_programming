#include <stdio.h>

/**
 * main - entry point
 *
 * Description: alphabet Reverse
 *
 * Return: 0 s
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
