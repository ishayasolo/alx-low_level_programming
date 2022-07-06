#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c = 3;

	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf("%ld", c);
		a = b;
		b = c;

		if (i != 47)
			printf(", ");
	}
	printf("\n");

	return (0);
}
