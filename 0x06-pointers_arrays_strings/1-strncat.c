#include "main.h"
#include <string.h>

/**
 * _strncat - appends the src string to the dest string,
 *	overwriting the terminating null byte (\0) at the end of dest,
 *	and then adds a terminating null byte
 *	and use at most n bytes from src
 *
 * @dest: string to be modified
 * @str: string to be appended
 * @n: number of bytes to be used from str
 *
 * Return: dest (modified string)
 */

char *_strcat(char *dest, char *src, int n)
{
	return (strcat(dest, src, n));
}

