#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print nums of base16
 *
 * Return: 0 s
 */

int main(void)
{
	int num = 48;

	while (num <= 102)
	{
		putchar(num);

		if (num == 57)
			num += 39;
		num++;
	}
	putchar('\n');

	return (0);
}
