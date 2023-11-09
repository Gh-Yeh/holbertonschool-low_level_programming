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
	char *ch;

	if (str == NULL)
		return (NULL);

	while (*(str + count))
		count++;

	ch = (char *)malloc((count + 1) * (sizeof(char)));

	if (ch == NULL)
		return (NULL);

	for (i = 0; i <= count; i++)
	{
		ch[i] = str[i];
	}

	return (ch);
}
