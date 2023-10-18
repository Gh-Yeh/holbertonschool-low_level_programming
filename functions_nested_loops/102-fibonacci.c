#include <stdio.h>
/**
  * main - prints the first 50 fib
  * Return: 0.
  */

int main(void)
{
	int i = 0;

	unsigned int long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%lu", j);
		else if (i == 1)
			printf(", %lu", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %lu", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
