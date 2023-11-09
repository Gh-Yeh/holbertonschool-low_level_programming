#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *@min: The first value of the array.
 *@max: The last value of the array.
 *Return: If min > max or the function fails - NULL.
 *Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, j;
	int size;

	if (min > max)
		return (NULL);

	int *p;

	size = max - min + 1;

	p = malloc(size * sizeof(*p));

	if (p == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
	{
		p[j] = i;
	}
	return (p);
}
