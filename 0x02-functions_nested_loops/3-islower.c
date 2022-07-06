#include "main.h"

/**
 * _islower - checks if a character is lowercase or not
 *
 * @c: character parameter
 *
 * Return: 1 (true) 0 (otherwise)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
