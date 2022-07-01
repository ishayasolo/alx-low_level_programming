#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int x;

	putchar('0');

	for (x = 1; x < 10; x++)
	{
		putchar(',');
		putchar(' ');
		putchar(x + '0');
	}

	return (0);
}
