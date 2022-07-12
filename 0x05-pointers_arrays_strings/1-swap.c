#include "main.h"

/**
 * swap_int - a function that swaps the value of two variables
 *
 * @a: pointer 1
 * @b: pointer 2
 *
 * Return: void (nothing)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
