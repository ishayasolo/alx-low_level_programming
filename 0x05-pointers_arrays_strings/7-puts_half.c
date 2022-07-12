#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints the second half of a string
 *
 * @str: string to be evaluated
 *
 * Return: void (nothing)
 */

void puts_half(char *str)
{
	int length;
	int i;

	length = strlen(str);
	i = (length / 2) % 2 != 0 ? length / 2 : (length / 2) + 1;

	for (; i < length; i++)
		putchar(str[i]);

	putchar('\n');
}
