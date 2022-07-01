#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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

	if (n > 0)
		printf("%d %s\n", n, "is positive");
	else if (n < 0)
		printf("%d %s\n", n, "is negative");
	else
		printf("%d %s\n", n, "is zero");

	return (0);
}
