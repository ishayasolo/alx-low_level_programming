#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _atoi - coverts string to an integer
 *
 * @s: string to be converted
 *
 * Return: converted integer value
 */

int _atoi(char *s)
{
	int num, digit, i;
	
	num = atoi(s);

	if (num == 0)
	{
		for (i = 0; i < strlen(s); i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				digit = s[i] - '0';
				num  = (num * 10) + digit;
			}
		}
	}
	
	return (num);
}
