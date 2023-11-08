#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{

	int count = 0, count1 = 0;
	int i, j;

	while (*(s1 + count))
		count++;

	while (*(s2 + count1))
		count1++;

	char *ch = malloc(((count + count1) + 1) * (sizeof(char)));

	if (s1 == NULL || s2 == NULL || ch == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		ch[i] = s1[i];
	}
	for (i = count, j = 0; i <= (count + count1); i++, j++)
	{
		ch[i] = s2[j];
	}
	return (ch);
}
