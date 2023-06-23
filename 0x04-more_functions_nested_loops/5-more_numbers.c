#include "main.h"

/**
 * more_numbers - prints numbers 14 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int c;

	n = 0;
	c = 0;

	while (n < 10)
	{
		while (c <= 14)
		{
			_putchar(c + '0');
			c++;
		}

		_putchar('\n');
		n++;
	}

	_putchar('\n');

}
