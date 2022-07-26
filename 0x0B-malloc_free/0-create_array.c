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

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * size);
	i = 0;

	while (arr[i] != '\0')
	{
		arr[i] = *c;
		i += 1;
	}

	return (arr);
}
