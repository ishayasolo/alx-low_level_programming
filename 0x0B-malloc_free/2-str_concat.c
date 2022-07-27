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

	i = j = k = l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	s3 = malloc(sizeof(*s3) * (i + j + 1));

	if (s3 == NULL)
		return (NULL);

	while (s1[k] != '\0')
	{
		s3[k] = s1[k];
		k++;
	}

	while (s2[l] != '\0')
	{
		s3[k] = s2[l];
		k++;
		l++;
	}

	s3[k] = '\0';

	return (s3);
}
