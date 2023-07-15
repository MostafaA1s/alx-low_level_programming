#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print nums using putchar
 *
 * Return: 0 s
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
