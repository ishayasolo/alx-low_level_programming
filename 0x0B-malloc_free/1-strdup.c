#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string str
 * @str: string to be copied
 *
 * Return: pointer to a newly allocated space
 */

char *_strdup(char *str)
{
	str = malloc(sizeof(char));

	if (str == NULL)
		return (NULL);

	return ((char*) *str);
}
