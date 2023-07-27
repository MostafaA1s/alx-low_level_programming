#include "main.h"
#include <stdio.h>
/**
 * _strcat - add string to another string,
 * overwriting the terminating null byte
 * and add it at the end of dest.
 * @dest: destination.
 * @src: source.
 * @n: char count.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src, int n)
{
	int destC = 0;
	int srcC = 0;

	while (dest[destC] != '\0')
	{
		destC++;
	}

	while (srcC < n)
	{
		dest[destC] = src[srcC];
		srcC++;
		destC++;
	}


	return (dest);
}
