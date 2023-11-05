#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if ((i + 1) <= n)
		{
			dest[i] = src[i];
			len++;
		}
	}
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}


	return (dest);
}
