#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 *Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	int count = 0, count2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[count])
		count++;

	while (s2[count2])
		count2++;

	str = malloc((count + n) * sizeof(*str) + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		str[i] = s1[i];
	if (n >= count2)
	{
		for (i = count, j = 0; j <= count2; i++, j++)
			str[i] = s2[j];
	}
	if (n < count2)
	{
		for (i = count, j = 0; j < n; i++, j++)
			str[i] = s2[j];
		str[n + count] = '\0';
	}
	return (str);
}
