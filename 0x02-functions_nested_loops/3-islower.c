#1nclude "main.h"

/**
 * _islower - checks if a character is lowercase or not
 *
 * Return: 1 (true) 0 (otherwise)
 */

int _islower(char c)
{
	int c2;
	c2 = (int) c;

	if (c2 >= 97 && c2 <= 122)
		return (0);
	else
		return (1);
}
