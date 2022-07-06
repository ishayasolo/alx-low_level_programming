#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, alphabet;

	for (i = 1; i <= 10; i++)
	{
		for (alphabet = 97; alphabet <= 112; alphabet++)
			_putchar(alphabet);

		_putchar('\n');
	}
}
