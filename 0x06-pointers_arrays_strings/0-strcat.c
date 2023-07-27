#include "main.h"
#include <stdio.h>
/**
 * _strcat - add string to another string, an
 * overwriting the terminating null byte
 * and add it at the end of dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int destC = 0;
	int srcC = 0;

	while (dest[destC] != '\0')
	{
		destC++;
	}

	while (src[srcC] != '\0')
	{
		dest[destC] = src[srcC];
		srcC++;
		destC++;
	}
	dest[destC] = '\0';
	return (dest);
}
