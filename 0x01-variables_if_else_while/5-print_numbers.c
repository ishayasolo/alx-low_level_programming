#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		printf("%d", x);

	putchar('\n');

	return (0);
}
