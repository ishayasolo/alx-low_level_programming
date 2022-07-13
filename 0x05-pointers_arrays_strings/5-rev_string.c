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
	int len = 0;
	int l = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for ( ; e < ((l / 2) + 1) ; e++)
	{
		x = (l - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
