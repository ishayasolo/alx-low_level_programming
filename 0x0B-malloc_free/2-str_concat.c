#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings together
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, k, l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[i] != '\0')
		i++;
	i++;

	while (s2[j] != '\0')
		j++;
	j++;

	s3 = malloc(sizeof(*s3) * (i + j));

	if (s3 == NULL)
		return (NULL);

	while (s1[k] != '\0')
	{
		s3[k] = s1[k];
		k++;
	}

	while (s2[l] != '\0')
	{
		s3[l + k + 1] = s2[l];
		l++;
	}

	return (s3);
}
