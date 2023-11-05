#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		if ((i + 1) <= n)
			dest[len] = src[i];
		len++;
	}
	dest[len + 1] = '\0';
	return (dest);
}
