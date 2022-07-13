#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n number of items in an array separated by commas
 *
 * @a: array
 * @n: number of items in array to be printed
 *
 * Return: void (nthing)
 */

void print_array(int *a, int n)
{
	int i;
	int array_size;

	array_size = (int) sizeof(a);
	n = array_size / sizeof(int);

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	putchar('\n');
}
