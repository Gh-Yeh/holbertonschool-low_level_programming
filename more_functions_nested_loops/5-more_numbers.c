/**
* more_numbers - print more numbers
*/

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
		i++;
		_putchar('\n');
	}
}
