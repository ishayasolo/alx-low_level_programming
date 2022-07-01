#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
		putchar(x + '0');

	for (y = 'a'; y <= 'f'; y++)
		putchar(y);

	putchar('\n');

	return (0);
}
