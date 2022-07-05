#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet from 'a' - 'z'
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
