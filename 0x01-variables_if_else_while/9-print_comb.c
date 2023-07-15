#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print 0. 1 to 9
 *
 * Return: 0 s
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
