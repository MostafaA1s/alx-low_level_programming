#include <main.h>

/**
 * main - entry point
 *
 * Description: putchar print
 *
 * Return: 0
 */


int main(void)
{
	char word[] = "_putchar";
	int index;

	for (index = 0; index < 8; index++)
	{
		_putchar(word[index]);
	}
	_putchar('\n');

	return (0);
}
