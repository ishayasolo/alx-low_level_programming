#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2d integer array
 * @width: column size
 * @height: row size
 *
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	i = j = 0;

	arr = malloc(sizeof(int) * width * height);

	if (arr == NULL
			|| width == 0
			|| width < 0
			|| height == 0
			|| height < 0)
		return (NULL);

	while (i < height)
	{
		while (j < width){
			arr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (arr);
}
