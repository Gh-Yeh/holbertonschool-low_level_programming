#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int k = 0;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = k;
	}
}
