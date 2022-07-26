#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 *	and initializes it with a specific char
 * @size: size of the array
 * @c: innitial value of the array
 *
 * Return: array of characters
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	arr = malloc(sizeof(char) * size);
	i = 0;

	if (size == 0 || arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i += 1;
	}

	return (arr);
}
