#include "main.h"

/**
 * _islower - checks if a character is lowercase or not
 *
 * Return: 1 (true) 0 (otherwise)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
