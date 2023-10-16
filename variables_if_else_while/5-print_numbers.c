#include <stdio.h>

/**
 * main - program that prints single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');


	return (0);
}
