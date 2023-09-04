#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width
 * @height: height
 * Return: pointer to 2 dimensional array or NULL if failure
 */

int **alloc_grid(int width, int height)
{
	int **i;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = malloc(sizeof(int *) * height);

	if (i == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		i[m] = malloc(sizeof(int) * width);

		if (i[m] == NULL)
		{
			for (; m >= 0; m--)
				free(i[m]);

			free(i);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			i[m][n] = 0;
	}

	return (i);
}
