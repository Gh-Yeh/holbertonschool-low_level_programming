#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int x = 1231952;
	unsigned long int i;
	unsigned long int bigF;

	for (i = 1; i < x; i++)
	{
		if (x % i == 0)
		{
			unsigned long int j;
			int count = 0;

			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
					count++;
				if (count > 0)
					continue;
			}
			if (count == 0)
			{
				bigF = i;
			}
		}
	}
	printf("%lu", bigF);
	return (0);

}
