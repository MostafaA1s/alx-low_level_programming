i#include "main.h"

/**
 * _strlen - return the length of a string.
 * @s: string pointer
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
