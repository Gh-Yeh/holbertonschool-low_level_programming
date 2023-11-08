#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	int count = 0;
	int i;

	while (*(str + count))
		count++;

	char *ch = malloc((count + 1) * (sizeof(char)));

	if (str == NULL || ch == NULL)
		return (NULL);

	for (i = 0; i <= count; i++)
	{
		ch[i] = str[i];
	}

	return (ch);
}
