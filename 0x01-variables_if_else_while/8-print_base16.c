#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int x;

	while (x < 16 || x <= 'f')
	{
		if (x == 10)
			x = 'a';

		printf("%d", x);
		x++;
	}
	putchar('\n');

	return (0);
}
