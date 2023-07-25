#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string pointr
 * Return: no return
 */
void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	count = _strlen(*s);
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}