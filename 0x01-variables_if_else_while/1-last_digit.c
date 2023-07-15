#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description : value of n
 *
 * Return: 0
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (lastDigit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastDigit);
	else if (lastDigit < 6 && lastDigit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastDigit);
	return (0);
}
