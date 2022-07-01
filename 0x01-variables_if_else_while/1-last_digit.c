#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d and is ", n, n % 10);

	if (n % 10 > 5)
		puts("greater than 5\n");
	else if (n % 10 == 0)
		puts("0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		puts("less than 6 and not 0\n");

	return (0);
}
