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

	for (i = 0; i < 8; i++)
		_putchar(string[i]);

	_putchar('\n');

	return (0);
}


