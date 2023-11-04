#include "main.h"

/**
* _strlen_recursion - main function
* @s: Function parameter
* Return: Length
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
