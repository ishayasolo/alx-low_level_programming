#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 1; x < 10; x++)
	{
		putchar(x + '0');
		if (x == 9)
			break;
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
