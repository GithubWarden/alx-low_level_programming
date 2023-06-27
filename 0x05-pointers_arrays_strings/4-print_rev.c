#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints strings in reverse
 *
 * @s: address of strings
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int length = 0;
	int z;

	while (s[length] != '\0')
	{
		length++;
	}

	z = length - 1;

	while (z >= 0)
	{
		_putchar(s[z]);
		z--;
	}

	_putchar('\n');
}
