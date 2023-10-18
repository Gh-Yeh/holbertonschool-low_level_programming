#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: argument passed
 * Return: value of the last digit
 */

int print_last_digit(int a)
{
	int ld;

	ld = a % 10;
	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
