#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: 0 if successful
 */

void print_numbers(void)
{
		char n;

		n = 0;

		while (n <= 9)
		{
		if (n != 2 && n != 4)
	{
		_putchar(n + '0');
}
n++;
		}
		_putchar('\n');
}
