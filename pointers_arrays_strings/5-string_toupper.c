#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @c: pointer
 *
 * Return: c
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}
	return (c);
}
