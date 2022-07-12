#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to be reversed
 *
 * Return: void (nothing)
 */

void print_rev(char *s)
{
	int length = strlen(s);
	int last_index = length - 1;
	int i;

	for (i = last_index; i >= 0; i--)
		putchar(*(s + i));

	putchar('\n');
}
