#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @char: innitial value of the array
 *
 * Return: array of characters
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return NULL;

	char *arr;
	int i;

	i = 0;
	arr = malloc(sizeof(*arr) * size);

	while(arr[i] != '\0')
	{
		arr[i] = c;
		i += 1;
	}

	return *arr;
}
