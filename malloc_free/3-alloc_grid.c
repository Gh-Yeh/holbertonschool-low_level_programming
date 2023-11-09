#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ch;

	if (width <= 0 || height <= 0)
		return (NULL);

	ch = (int **)malloc(height * sizeof(int *));

	if (ch == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ch[i] = (int *)malloc(width * sizeof(int));

		if (ch[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ch[i]);
			free(ch);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ch[i][j] = 0;
	}
	return (ch);
}
