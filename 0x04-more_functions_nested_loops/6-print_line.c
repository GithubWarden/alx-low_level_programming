#include "main.h"

/**
 * print_line - draws straight line in the terminal
 * @n: number of times _ is printed
 *
 * Return: 0 if successful
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int i;

	i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}

	_putchar ('\n');
}
