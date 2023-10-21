#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j = 0;

		while (j < size)
		{
			for (i = 0; i < size; i++)
			{
				putchar('#');
			}
			_putchar('\n');
			j++;
		}
	}
}
