#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 *	iwhich is a duplicate of the string str
 * @str: string to be copied
 *
 * Return: pointer to a newly allocated space
 */

char *_strdup(char *str)
{
	char *strDup;
	int i, j;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	i++;

	strDup = malloc(sizeof(*str) * i);

	if (strDup == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		strDup[j] = str[j];
		j++;
	}

	return (strDup);
}
