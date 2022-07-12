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
	
	for (i = length / 2; i < length - 1; i++)
		putchar(str[i]);

	putchar('\n);
}
