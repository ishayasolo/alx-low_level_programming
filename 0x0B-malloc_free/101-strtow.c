#include "main.h"
/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 * Return: pointer to an array of strings (words) or null
 **/
char **strtow(char *str)
{
	char **strDup;
	int i, n, m, words;

	if (str == NULL || str[0] == 0)
		return (NULL);
	words = word_counter(str);
	if (words < 1)
		return (NULL);
	strDup = malloc(sizeof(char *) * (words + 1));
	if (strDup == NULL)
		return (NULL);
	i = 0;
	while (i < words && *str != '\0')
	{
		if (*str != ' ')
		{
			n = 0;
			while (str[n] != ' ')
				n++;
			strDup[i] = malloc(sizeof(char) * (n + 1));
			if (strDup[i] == NULL)
			{
				while (--i >= 0)
					free(strDup[--i]);
				free(strDup);
				return (NULL);
			}
			m = 0;
			while (m < n)
			{
				strDup[i][m] = *str;
				m++, str++;
			}
			strDup[i][m] = '\0';
			i++;
		}
		str++;
	}
	strDup[i] = '\0';
	return (strDup);
}
