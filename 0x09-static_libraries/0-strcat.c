#include "main.h"
#include <string.h>

/**
 * _strcat - appends the src string to the dest string,
 *	overwriting the terminating null byte (\0) at the end of dest,
 *	and then adds a terminating null byte
 *
 * @dest: string to be modified
 * @str: string to be appended
 *
 * Return: dest (modified string)
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
