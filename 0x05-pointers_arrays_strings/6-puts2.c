#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints characters in the odd index of a string
 *
 * @str: string to be evaluated
 *
 * Return: void (nothing)
 */

void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length - 1; i += 2)
		putchar(str[i]);

	if (length % 2 == 0)
		putchar(str[length - 1]);

	putchar('\n');
}
