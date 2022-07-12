#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void (nothing)
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int last_index = length - 1;
	int i;

	for (i = last_index; i >= 0; i--)
		*s += *(s + i);
}
