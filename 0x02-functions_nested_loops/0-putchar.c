#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	char string[] = "_putchar";

	for (i = 0; i < string.length; i++)
		_putchar(string[i]);

	putchar('\n');

	return (0);
}


